// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.21.0-SNAPSHOT-04-09--09-45.git-47c46f4"
let commonChecksum = "f382e12ed4cd4ecacc74236a0f9dcccd13b479c2e40ee6f4f52e41853ccb625b"
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
