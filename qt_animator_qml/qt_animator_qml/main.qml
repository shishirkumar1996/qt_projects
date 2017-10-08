import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true

    Rectangle{
        id: myBox;
        width: 50;
        height: 50;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.verticalCenter: parent.verticalCenter;
        color: "blue";

        ParallelAnimation{
        ScaleAnimator {
            target: myBox;
            from: 5;
            to: 1;
            duration: 2000;
            easing.type: Easing.InOutElastic;
            easing.amplitude: 2.0;
            easing.period: 1.5;
            running: true;

        }

        RotationAnimator {
            target: myBox;
            from: 0;
            to: 360;
            duration: 1000;

        }
        running: true;

        }


    }
}

