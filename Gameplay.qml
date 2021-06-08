import QtQuick 2.12
import QtQuick.Layouts 1.12

GridLayout {
    property bool viss: false
    property bool timer: true
    property int l: 10
    id:gl

    width:  600
    height: 600

    columns: 4
    rows: 4
    columnSpacing: 0
    rowSpacing: 0
    Item {

    focus: if (toolbar.vis===true || viss===true) false; else true;
    Keys.onPressed: {
        switch(event.key) {
        case Qt.Key_Left: gameplay.left();
            break;
        case Qt.Key_Right: gameplay.right();
            break;
        case Qt.Key_Up: gameplay.up();
            break;
        case Qt.Key_Down: gameplay.down();
            break;
        }
}
    }


        function newGame(){
            var newGameConfigs= helper.newGame()
            for(var i = 0; i < newGameConfigs.length;i++)
             bricks.itemAt(i).config=newGameConfigs[i]
   console.log(newGameConfigs)

       }


    function right(){
        var brickConfigs = []
        for(var i = 0; i < bricks.count;i++){
            brickConfigs.push(bricks.itemAt(i).config)
        }

        var brickRight = helper.right(brickConfigs)
        for( i = 0; i < brickRight.length;i++){
            if (brickRight[i]===2048)
                viss=true;
            if (brickRight[i]!==0)
                l++;
            bricks.itemAt(i).config=brickRight[i]
    }
        if (l===16) toolbar.vis=true;
        l=0;
    }


    function left(){
        var brickConfigs = []
        for(var i = 0; i < bricks.count;i++){
            brickConfigs.push(bricks.itemAt(i).config)
        }

        var brickRight = helper.left(brickConfigs)
        for( i = 0; i < brickRight.length;i++){
            if (brickRight[i]===2048)
                viss=true;
            if (brickRight[i]!==0)
                l++;
            bricks.itemAt(i).config=brickRight[i]
    }
        if (l===16) toolbar.vis=true;
        l=0;
    }


    function up(){
        var brickConfigs = []
        for(var i = 0; i < bricks.count;i++){
            brickConfigs.push(bricks.itemAt(i).config)
        }

        var brickRight = helper.up(brickConfigs)
        for( i = 0; i < brickRight.length;i++){
            if (brickRight[i]===2048)
                viss=true;
            if (brickRight[i]!==0)
                l++;
            bricks.itemAt(i).config=brickRight[i]
    }
        if (l===16) toolbar.vis=true;
        l=0;
    }


    function down(){
        var brickConfigs = []
        for(var i = 0; i < bricks.count;i++){
            brickConfigs.push(bricks.itemAt(i).config)
        }

        var brickRight = helper.down(brickConfigs)
        for( i = 0; i < brickRight.length;i++){
            if (brickRight[i]===2048)
                viss=true;
            if (brickRight[i]!==0)
                l++;
            bricks.itemAt(i).config=brickRight[i]
    }
        if (l===16) toolbar.vis=true;
        l=0;
    }


    Repeater{
        id:bricks
        model: 16

        Brick {

        }
    }


    Component.onCompleted: {
        newGame()
    }

}
