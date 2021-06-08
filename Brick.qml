import QtQuick 2.12

Rectangle{

    width: 150; height: 150
    color: if (config !== 0) Qt.rgba((255-config/10)/500, config*10/500, 0/255, 1); else "grey"

    property int config: 14
    property bool light: false

    border.width: 1
    border.color: "black"



    Rectangle{
        anchors.centerIn: parent     
        Text{
            anchors.centerIn: parent
            text: if (config===0) ""; else config
            font.pointSize: 50
        }
    }

}
