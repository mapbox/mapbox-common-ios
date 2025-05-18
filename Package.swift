// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.13.0-SNAPSHOT-05-18--10-50.git-ecbb6ed"
let commonChecksum = "7a4330b905dc93948fc24ae10490ecc23018da7721b912634eb4f5abe1f63a5a"
let releaseType = "snapshots"

let turfVersion: Version = "4.0.0"

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
