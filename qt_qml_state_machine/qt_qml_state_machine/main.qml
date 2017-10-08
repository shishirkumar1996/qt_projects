import QtQuick 2.3
import QtQuick.Window 2.2

Window{
    visible: true;
    width: 480;
    height: 320;

    Rectangle {
        id: background;
        anchors.fill: parent;

        state: "RELEASED";
        states: [
            State{
                name: "PRESSED"
                PropertyChanges { target: background; color: "blue"}
            },
            State{
                name: "RELEASED"
                PropertyChanges { target: background; color: "red"}

            }

        ]

        SequentialAnimation on color
        {
            ColorAnimation {to: "yellow";duration: 1000}
            ColorAnimation {to: "red"; duration: 1000}
            ColorAnimation { to: "blue"; duration: 1000}
            loops: Animation.Infinite;

        }


        MouseArea {
            anchors.fill: parent;
            onPressed: background.state = "PRESSED";
            onReleased: background.state = "RELEASED";
        }

        transitions: [
            Transition {
                from: "PRESSED"
                to: "RELEASED"
                ColorAnimation { target: background; duration: 200}


            },
            Transition {
                from: "RELEASED"
                to: "PRESSED"
                ColorAnimation { target: background;duration: 200}

            }

        ]
    }

    Text{
        text: qsTr("Hello World");
        anchors.centerIn: parent;
        color: "white";
        font.pointSize: 15;
        SequentialAnimation on opacity {
            NumberAnimation { to: 0.0; duration: 200}
            NumberAnimation { to: 1.0; duration: 200}
            loops: Animation.Infinite;

        }

        NumberAnimation on rotation {
            from: 0;
            to: 360;
            duration: 2000;
            loops: Animation.Infinite;

        }
    }

}
