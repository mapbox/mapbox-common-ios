// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.9.0-daily-2024-11-26-04-25"
let commonChecksum = "769f51c9464b2ea2a77c4b5f433af1a0bdf99bcd183973fcc199e913aab6764b"

let turfVersion: Version = "4.0.0-beta.1"

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
            url: "https://api.mapbox.com/downloads/v2/mapbox-common/releases/ios/packages/\(commonVersion)/MapboxCommon.zip",
            checksum: commonChecksum
        ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommon"]
        )
    ],
    cxxLanguageStandard: .cxx17
)
