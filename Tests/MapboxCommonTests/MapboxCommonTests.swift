import XCTest
import MapboxCommon


final class MapboxCommonTests: XCTestCase {
    func testVersion() {
        XCTAssertTrue(ValueConverter.toJson(forValue: 0) == "0")
    }

    static var allTests = [
        ("testVersion", testVersion),
    ]
}
