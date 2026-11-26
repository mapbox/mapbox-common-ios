// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.37.0-SNAPSHOT-11-26--09-27.git-e82fb4c"
let commonChecksum = "2ec37502e4b14fc04b1309ee7ecb7ceeacbbd19a5cd54ada1a07cecfc7b4c4ab"
let releaseType = "snapshots"

let turfVersion: Version = "4.1.0"

let package = Package(
    name: "MapboxCommon",
    platforms: [.iOS(.v12), .macOS(.v10_15), .custom("visionos", versionString: "1.0")],
    products: [
        .library(name: "MapboxCommon", targets: ["MapboxCommonWrapper"]),
    ],
    dependencies: [
        .package(url: "https://github.com/mapbox/turf-swift.git", exact: turfVersion)
    ],
    targets: [
        .target(name: "MapboxCommonWrapper", dependencies: [
            .product(name: "Turf", package: "turf-swift"),
            .target(name: "MapboxCommon")
        ]),
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.mapbox.com/downloads/v2/mapbox-common/\(releaseType)/ios/packages/\(commonVersion)/MapboxCommon.zip",
            checksum: commonChecksum
        ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommon"]
        )
    ],
    cxxLanguageStandard: .cxx17
)
