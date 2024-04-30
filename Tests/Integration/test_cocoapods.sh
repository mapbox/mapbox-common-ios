#!/usr/bin/env sh
set -euo pipefail

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/../.."
pushd "${ROOT_DIR}/Tests/Integration/CocoaPods"

xcodegen generate
bundle install
bundle exec pod repo update
bundle exec pod install
xcodebuild -workspace PodInstall.xcworkspace -scheme PodInstall -destination 'platform=iOS Simulator,name=iPhone 14,OS=latest' build CODE_SIGNING_ALLOWED=NO

popd
