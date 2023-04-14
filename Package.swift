// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let version = "23.5.0-rc.1"
let checksum = "d4cbfd7ca047345a76a1cab6e208b97879cb3b5cae695b1f430df001a0422ccd"

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
