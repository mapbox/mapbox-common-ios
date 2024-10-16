// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "0.0.0-beta.1"
let commonChecksum = "some"

let turfVersion = "3.0.0"
let turfChecksum = "some_shecksum"

let package = Package(
    name: "MapboxCommon",
    platforms: [.iOS(.v12), .macOS(.v10_15), .custom("visionos", versionString: "1.0")],
    products: [
        .library(name: "MapboxCommon", targets: ["MapboxCommonWrapper"])
    ],
    targets: [
        .target(name: "MapboxCommonWrapper", dependencies: [
            .target(name: "Turf"),
            .target(name: "MapboxCommonBinary")
        ]),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.mapbox.com/downloads/v2/mapbox-common/releases/ios/packages/\(commonChecksum)/MapboxCommon.zip",
            checksum: commonChecksum
        ),
        .binaryTarget(
            name: "Turf",
            url: "https://github.com/mapbox/turf-swift/releases/download/v\(turfVersion)/Turf.xcframework.zip",
            checksum: turfChecksum
        ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommonWrapper"]
        )
    ],
    cxxLanguageStandard: .cxx17
)
