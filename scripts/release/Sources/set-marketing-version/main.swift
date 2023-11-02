import Foundation
import ArgumentParser

extension String {
    mutating func replacingLineContaining(_ find: String, with replace: String) {
        let content = components(separatedBy: .newlines)
        var newContent = [String]()
        for line in content {
            guard line.contains(find) else {
                newContent.append(line)
                continue
            }
            newContent.append(replace)
        }
        self = newContent.joined(separator: "\n")
    }
}

let fm = FileManager.default

struct MarketingVersion: ParsableCommand {
    @Argument(help: "The new marketing version.")
    var marketingVersion: String

    var projectPathURL: URL {
        let currentDirectoryURL = URL(fileURLWithPath: fm.currentDirectoryPath)
        let buildURL = URL(fileURLWithPath: CommandLine.arguments[0], relativeTo: currentDirectoryURL)
        return buildURL.appendingPathComponent("../../../../../../")
    }

    var isPreRelease: Bool {
        if marketingVersion.rangeOfCharacter(from: CharacterSet.letters) != nil {
            return true
        }
        if marketingVersion.rangeOfCharacter(from: CharacterSet(["-", "-"])) != nil {
            return true
        }
        return false
    }

    func replaceLineContaining(_ find: String, with replace: String, in url: URL) throws {
        var content = try String(contentsOfFile: url.path)
        content.replacingLineContaining(find, with: replace)
        try fm.removeItem(atPath: url.path)
        try content.write(toFile: url.path, atomically: true, encoding: .utf8)
    }

    func runCocoaPodsVersionUpdate() throws {
        let podfileURL = projectPathURL.appendingPathComponent("Tests/Integration/CocoaPods/Podfile")
        try replaceLineContaining("pod 'MapboxCommon'",
                                  with: "  pod 'MapboxCommon', '\(marketingVersion)'",
                                  in: podfileURL)
    }

    func runCarthageVersionUpdate() throws {
        let cartfileURL = projectPathURL.appendingPathComponent("Tests/Integration/Carthage/Cartfile")
        try replaceLineContaining("binary \"https://api.mapbox.com/downloads/v2/carthage/mapbox-common/",
                                  with: "binary \"https://api.mapbox.com/downloads/v2/carthage/mapbox-common/MapboxCommon.json\" == \(marketingVersion)",
                                  in: cartfileURL)
    }

    func runSPMVersionUpdate() throws {
        let spmManifestURL = projectPathURL.appendingPathComponent("Tests/Integration/SPM/project.yml")
        try replaceLineContaining("branch: release/v",
                                  with: "    branch: release/v\(marketingVersion)",
                                  in: spmManifestURL)
        let spmPackageURL = projectPathURL.appendingPathComponent("Package.swift")
        try replaceLineContaining("let version =",
                                  with: "let version = \"\(marketingVersion)\"",
                                  in: spmPackageURL)
    }

    func runReadmeVersionUpdate() throws {
        let readmeURL = projectPathURL.appendingPathComponent("README.md")

        try replaceLineContaining(".package(url: \"https://github.com/mapbox/mapbox-common-ios.git\", from:",
                                  with: ".package(url: \"https://github.com/mapbox/mapbox-common-ios.git\", from: \"\(marketingVersion)\"),",
                                  in: readmeURL)

        try replaceLineContaining("pod 'MapboxCommon'",
                                  with: "pod 'MapboxCommon', '\(marketingVersion)'",
                                  in: readmeURL)

        try replaceLineContaining("binary \"https://api.mapbox.com/downloads/v2/carthage/mapbox-common",
                                  with: "binary \"https://api.mapbox.com/downloads/v2/carthage/mapbox-common/MapboxCommon.json\" == \(marketingVersion)",
                                  in: readmeURL)
    }

    mutating func run() throws {
        try runCocoaPodsVersionUpdate()
        try runCarthageVersionUpdate()
        try runSPMVersionUpdate()

        if isPreRelease {
            print("Not updating README.md because this is a proper release.")
        } else {
            print("Updating README.md because this is not a pre-release.")
            try runReadmeVersionUpdate()
        }
    }
}

MarketingVersion.main()
