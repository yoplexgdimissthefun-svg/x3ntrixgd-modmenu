#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/ui/Notification.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        Notification::create(
            "X3ntrix Mod Menu Loaded!",
            NotificationIcon::Success
        )->show();

        return true;
    }
};