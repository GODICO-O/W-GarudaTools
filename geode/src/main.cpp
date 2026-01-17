#include <geode/geode.hpp>
#include <geode/ui/Popup.hpp>

using namespace geode::prelude;

class WGarudaPopup : public Popup<> {
protected:
    bool setup() override {
        this->setTitle("🦅 W-GARUDA Tools 🦅");

        auto label = CCLabelTTF::create(
            "W-Garuda Tools Initialized",
            "Arial",
            18
        );
        label->setPosition(m_size / 2);
        this->addChild(label);

        return true;
    }

public:
    static void open() {
        auto popup = new WGarudaPopup();
        if (popup && popup->init(300.f, 200.f)) {
            popup->autorelease();
            popup->show();
        } else {
            CC_SAFE_DELETE(popup);
        }
    }
};

$on_mod(Loaded) {
    // Untuk test awal: popup langsung muncul saat game dibuka
    WGarudaPopup::open();
}
