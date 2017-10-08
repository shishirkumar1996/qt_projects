import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true;
    width: 420;
    height: 380;

    MouseArea{
        anchors.fill: parent;
        onClicked: {
            if(sprite.paused)
                sprite.resume();
            else
                sprite.pause();

        }
    }

    Rectangle{
        anchors.fill: parent;
        color: "white";
    }

    AnimatedSprite{
        id: sprite;
        width: 90;
        height: 100;
        x: -128;
        y: parent.height / 2;
        source: "qrc:///child.jpg";
        frameCount: 6;
        frameWidth: 90;
        frameHeight: 100;
        frameRate: 25;
        loops: Animation.Infinite;
        running: true;

        NumberAnimation{
            target: sprite;
            property: "x";
            from: -128;
            to: 512;
            duration: 3000;
            loops: Animation.Infinite;
            running: true;


        }
    }


}

