import XCTest
import MapboxCommon


final class MapboxCommonTests: XCTestCase {
    func testVersion() {
        XCTAssertTrue(Version.getCommonSDKVersionString().count > 0)
    }

    static var allTests = [
        ("testVersion", testVersion),
    ]
}
