// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let commonVersion = "24.9.0-daily-2024-10-16-04-26"
let commonChecksum = "bd443c4c695dfacbc82731e25ba50bbc086afa6c7967043f134f994c8b758c82"

let package = Package(
    name: "MapboxCommon",
    platforms: [.iOS(.v12), .macOS(.v10_15), .custom("visionos", versionString: "1.0")],
    products: [
        .library(name: "MapboxCommon", targets: ["MapboxCommonWrapper"]),
    ],
    dependencies: [
        .package(url: "https://github.com/mapbox/turf-swift.git", branch: "main")
    ],
    targets: [
        .target(name: "MapboxCommonWrapper", dependencies: [
            .product(name: "Turf", package: "turf-swift"),
            .target(name: "MapboxCommon")
        ]),
        /// Revert to download from storage
        .binaryTarget(
            name: "MapboxCommon",
            path: "MapboxCommon.xcframework"
        ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommonWrapper"]
        ),
    ],
    cxxLanguageStandard: .cxx17
)