import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    width: 800
    height: 800
    visible: true

    Image {
        id: image4
        anchors.rightMargin: 0
        anchors.bottomMargin: -4
        anchors.leftMargin: 0
        anchors.topMargin: 4
        anchors.fill: parent
        source: "resource/login.png"

        Rectangle {
            id: rectangle1
            height: 200
            gradient: Gradient {
                GradientStop {
                    position: 0
                    color: "#805bcce9"
                }

                GradientStop {
                    position: 1
                    color: "#80000000"
                }
            }
            anchors.right: parent.right
            anchors.rightMargin: 0
            anchors.left: parent.left
            anchors.leftMargin: 0
            anchors.top: parent.top
            anchors.topMargin: -4

            Text {
                id: text1
                width: 78
                height: 53
                text: qsTr("4th October,2017")
                anchors.top: parent.top
                anchors.topMargin: 0
                anchors.left: parent.left
                anchors.leftMargin: 0
                font.pixelSize: 12
            }

            MouseArea {
                id: mouseArea1
                x: 441
                width: 50
                height: 50
                anchors.right: parent.right
                anchors.rightMargin: 5
                anchors.top: parent.top
                anchors.topMargin: 5
                hoverEnabled: true

                Image {
                    id: image2
                    anchors.fill: parent
                    source: "resource/shutdown.png"
                }
            }

            MouseArea {
                id: mouseArea2
                x: 689
                y: 5
                width: 50
                height: 50

                Image {
                    id: image3
                    anchors.fill: parent
                    source: "resource/restart.png"
                }
            }
        }

        Rectangle {
            id: rectangle2
            x: 300
            y: 319
            width: 360
            height: 200
            color: "#80000000"
            radius: 15
            anchors.verticalCenterOffset: 250
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter

            Text {
                id: text2
                x: 81
                y: 40
                color: "#ffffff"
                text: qsTr("Username:")
                font.pixelSize: 12
            }

            Text {
                id: text3
                x: 76
                y: 83
                color: "#ffffff"
                text: qsTr("Text")
                font.pixelSize: 12
            }

            TextInput {
                id: textInput1
                x: 191
                y: 40
                width: 80
                height: 20
                text: qsTr("Text Input")
                font.pixelSize: 12

                Rectangle {
                    id: rectangle3
                    color: "#ffffff"
                    radius: 5
                    anchors.fill: parent
                }
            }

            TextInput {
                id: textInput2
                x: 197
                y: 83
                width: 80
                height: 20
                text: qsTr("Text Input")
                font.pixelSize: 12

                Rectangle {
                    id: rectangle4
                    color: "#ffffff"
                    radius: 5
                    anchors.rightMargin: 8
                    anchors.bottomMargin: 0
                    anchors.leftMargin: -8
                    anchors.topMargin: 0
                    anchors.fill: parent
                }
            }

            MouseArea {
                id: mouseArea3
                x: 76
                y: 117
                width: 183
                height: 23

                Rectangle {
                    id: rectangle5
                    color: "#27a9e3"
                    anchors.fill: parent

                    Text {
                        id: text4
                        x: 108
                        y: 5
                        color: "#ffffff"
                        text: qsTr("Login")
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter: parent.verticalCenter
                        font.pixelSize: 12
                    }
                }
            }
        }

        Image {
            id: image1
            x: 355
            y: 228
            width: 200
            height: 200
            anchors.horizontalCenter: parent.horizontalCenter
            source: "resource/logo.png"
        }
    }
}

