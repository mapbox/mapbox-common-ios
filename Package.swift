// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let version = "23.11.3"
let checksum = "3869d3f5250c5e0474f4bbfcee1340263413fbfde22f0faddd0b6bac85e9baf5"

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
