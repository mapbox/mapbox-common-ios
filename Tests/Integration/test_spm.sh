#!/usr/bin/env sh
set -euo pipefail

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/../.."
pushd "${ROOT_DIR}/Tests/Integration/SPM"

xcodegen generate
xcodebuild -project SPMTest.xcodeproj -scheme SPMTest -scmProvider system -destination 'platform=iOS Simulator,name=iPhone 16,OS=latest' build CODE_SIGNING_ALLOWED=NO

popd
