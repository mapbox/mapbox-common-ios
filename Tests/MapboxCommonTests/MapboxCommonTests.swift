import XCTest
import MapboxCommon


final class MapboxCommonTests: XCTestCase {
    func testVersion() {
        XCTAssertTrue(Version.getString().count > 0)
    }

    static var allTests = [
        ("testVersion", testVersion),
    ]
}
