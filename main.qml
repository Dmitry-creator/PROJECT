import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
Window {
    id: w

    visible: true

    minimumWidth: 600
    maximumWidth: 600
    width: 600

    minimumHeight: cl.height
    maximumHeight: cl.height
    height: cl.height

    title: qsTr("2048")

    ColumnLayout{ //компоновка
        id: cl
        anchors.centerIn: w.contentItem
        spacing: 2

           Gameplay{
                    id: gameplay

                 }
                 Toolbar{
                     id: toolbar
                     onNewGame: gameplay.newGame()
                     onQuitApp: Qt.quit()
                 }
    }


Dialog{
    height: 40
    width: 160
      id: defeat
      visible: toolbar.vis
      anchors.centerIn: parent
      Text{
      font.pointSize: 22
      anchors.centerIn: parent
      color: "red"
      text: "Поражение"
}
}
Dialog{
    height: 40
    width: 160
      id: win
      visible: gameplay.viss
      anchors.centerIn: parent
      Text{
      font.pointSize: 22
      anchors.centerIn: parent
      color: "Green"
      text: "Победа"
}
}
}

