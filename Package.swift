// swift-tools-version:5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription
import Foundation

let version = "24.4.0-beta.3"
let checksum = "784a7de6022a0fed3b11b9844152b4ec2b5660919a93f181d9ce3e028ab421f0"

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
