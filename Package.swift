// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let package = Package(
    name: "MapboxCommon",
    platforms: [.iOS(.v12), .macOS(.v10_15), .custom("visionos", versionString: "1.0")],
    products: [
        .library(
            name: "MapboxCommon",
            targets: ["MapboxCommon"]
        )
    ],
    targets: [
        .target(
            name: "MapboxCommon",
            dependencies: [
                .target(name: "Turf"),
                .target(name: "MapboxCommonBinary")
            ]
        ),
        .binaryTarget(
            name: "MapboxCommonBinary",
            path: "MapboxCommon.xcframework"
        ),
         .binaryTarget(
             name: "Turf",
             url: "https://github.com/mapbox/turf-swift/releases/download/v3.0.0/Turf.xcframework.zip",
             checksum: "02336281934edee0bf6cda4cc54a1e96b589279af6031ff9646fe65b17ea67cf"
         ),
        .testTarget(
            name: "MapboxCommonTests",
            dependencies: ["MapboxCommon"]
        )
    ],
    cxxLanguageStandard: .cxx17
)
