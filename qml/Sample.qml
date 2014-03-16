import QtQuick 1.1

Rectangle {
    width: 360
    height: 360
    Text {
        id: myText
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {

        }
        onReleased: {
          myText.scale = 1
        }
        onPressed: {
          myText.scale = 2
        }
    }
}
