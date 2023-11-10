#!/usr/bin/env bash
# This script fetches the LICENSE.md from the version specified in Package.swift
# and returns 0 if it matches the LICENSE.md in this repository.

set -eo pipefail

AUTHOR="Release SDK bot for Core SDK team <core-sdk-team@mapbox.com>"
MESSAGE="Update LICENSE.md"
BRANCH_NAME=`git rev-parse --abbrev-ref HEAD`
GITHUB_TOKEN=$(mbx-ci github writer public token)

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/../.."
pushd "${ROOT_DIR}"

VERSION=`awk '/let version/{print $NF}' "${ROOT_DIR}/Package.swift"`
VERSION=${VERSION:1:${#VERSION}-2}

curl -n "https://api.mapbox.com/downloads/v2/mapbox-common/releases/ios/packages/${VERSION}/MapboxCommon.zip" --output temp-license.zip
rm -rf "${ROOT_DIR}/LICENSE.md.old"
mv "${ROOT_DIR}/LICENSE.md" "${ROOT_DIR}/LICENSE.md.old"
unzip -p temp-license.zip LICENSE.md > "${ROOT_DIR}/LICENSE.md"
rm -rf temp-license.zip

OLD_LICENSE="${ROOT_DIR}/LICENSE.md.old"
NEW_LICENSE="${ROOT_DIR}/LICENSE.md"

STATUS="$(cmp --silent $OLD_LICENSE $NEW_LICENSE; echo $?)"

if [[ $STATUS -ne 0 ]]; then  # if status isn't equal to 0, then execute code
    echo "LICENSE.md in the binary and inside this repository doesn't match."
    git add ${ROOT_DIR}/LICENSE.md
    git commit --author="$AUTHOR" -m "$MESSAGE"
    git push https://x-access-token:$GITHUB_TOKEN@github.com/mapbox/mapbox-common-ios/tree/$BRANCH_NAME
    rm -rf "${ROOT_DIR}/LICENSE.md.old"
    exit 0
else
    echo "The LICENSE.md in the binary and inside this repository matches."
    rm -rf "${ROOT_DIR}/LICENSE.md.old"
    exit 0
fi
