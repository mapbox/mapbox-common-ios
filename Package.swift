// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let version = "23.1.1"
let checksum = "4c81ffa2b7c324d7599ffccde4a4e75be2bbe4f4da98a6dde0cf4dd902e20585"

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
