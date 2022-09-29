// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let version = "23.0.1"
let checksum = "6a7bde31ec036e62db1d3f98520fc6920cf4efc8741f51b052532b4bc57ad684"

let package = Package(
    name: "MapboxCommon",
    platforms: [.iOS(.v10), .macOS(.v10_15)],
    products: [
        .library(
            name: "MapboxCommon",
            targets: ["MapboxCommon"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "MapboxCommon",
            url: "https://api.mapbox.com/downloads/v2/mapbox-common/releases/ios/packages/\(version)/MapboxCommon.zip",
            checksum: checksum
        ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommon"]
        )
    ],
    cxxLanguageStandard: .cxx14
)
