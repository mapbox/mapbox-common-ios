#!/usr/bin/env sh
set -euo pipefail

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="${DIR}/../.."
pushd "${ROOT_DIR}/Tests/Integration/CocoaPods"

echo Publishing to Cocoapods takes a long time so try to build and wait for up to 2 hours

retries=40

for ((i=0; i<retries; i++)); do
    xcodegen generate &&
    bundle install &&
    bundle exec pod repo update &&
    bundle exec pod install &&
    xcodebuild -workspace PodInstall.xcworkspace -scheme PodInstall -destination 'platform=iOS Simulator,name=iPhone 14,OS=latest' build CODE_SIGNING_ALLOWED=NO

    [[ $? -eq 0 ]] && break

    echo "something went wrong, let's wait 3 minutes and retry"
    sleep 180
done

popd

(( retries == i )) && { echo 'Failed!'; exit 1; }
exit 0

