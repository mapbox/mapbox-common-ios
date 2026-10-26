// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.35.0-SNAPSHOT-10-26--12-44.git-300d962"
let commonChecksum = "9e29e7e0a60d8b045f9d79608402ed37ad41c7d198b9909aa0f2bcda3267a4b0"
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
