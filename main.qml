import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true
    width: 360
    height: 360

    Timer {
        id: timer
        running: false
        onTriggered: _cpp.hideNativeSplash()
        interval: 1000
        triggeredOnStart: false
    }

    Text {
        text: "This is Qt"
        anchors.centerIn: parent
    }

    Component.onCompleted: timer.running = true
}
