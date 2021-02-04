import UIKit
import MapboxCommon


@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        assert(try! Version.getCommonSDKVersionString().count > 0)
        return true
    }
}
