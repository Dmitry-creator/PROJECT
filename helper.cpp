#include "helper.h"
#include <QDebug>
#include <math.h>
Helper::Helper(QObject *parent) : QObject(parent)
{

}
QVector<int> Helper::newGame()
{
    QVector<int> bricks = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=0;
    srand(time(NULL));
    for (int j=0; j<2; j++){
    i=rand()%16;
    while(bricks[i]!=0){
     i=rand()%16;
    }
    bricks[i]=2;
    }
return bricks;
}

QVector<int> Helper::right(QVector<int> bricks)
{
    int k=0;
    for (int j=0; j<15; j++){
    for (int i=0; i<15; i++){
    if (bricks[i+1]==0 && bricks[i]!=0 && (i!=3 && i!=7 && i!=11 && i!=15)){
        bricks[i+1]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }


    for (int i=15; i>0; i--){
    if (bricks[i-1]==bricks[i] ){
        bricks[i]=bricks[i-1]*2; bricks[i-1]=0;
        k=1;
}
    }

    for (int j=0; j<15; j++){
    for (int i=0; i<15; i++){
    if (bricks[i+1]==0 && bricks[i]!=0 && (i!=3 && i!=7 && i!=11 && i!=15)){
        bricks[i+1]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }
int i=0;
    i=rand()%16;
    while(bricks[i]!=0){
     i=rand()%16;
    }
   if (k==1) bricks[i]=2;

return bricks;
}

QVector<int> Helper::left(QVector<int> bricks)
{
    int k=0;
    for (int j=0; j<15; j++){
    for (int i=15; i>0; i--){
    if (bricks[i-1]==0 && bricks[i]!=0 && (i!=0 && i!=4 && i!=8 && i!=12)){
        bricks[i-1]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }


    for (int i=0; i<15; i++){
    if (bricks[i]==bricks[i+1] ){
        bricks[i]=bricks[i+1]*2; bricks[i+1]=0;
        k=1;
}
    }

    for (int j=0; j<15; j++){
    for (int i=15; i>0; i--){
    if (bricks[i-1]==0 && bricks[i]!=0 && (i!=0 && i!=4 && i!=8 && i!=12)){
        bricks[i-1]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }

    int i=0;
        i=rand()%16;
        while(bricks[i]!=0){
         i=rand()%16;
        }
        if (k==1) bricks[i]=2;
return bricks;
}

QVector<int> Helper::up(QVector<int> bricks)
{
    int k=0;
    for (int j=0; j<15; j++){
    for (int i=15; i>3; i--){
    if (bricks[i-4]==0 && bricks[i]!=0 ){
        bricks[i-4]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }


    for (int i=15; i>3; i--){
    if (bricks[i]==bricks[i-4] ){
        bricks[i-4]=bricks[i]*2; bricks[i]=0;
        k=1;
}
    }

    for (int j=0; j<15; j++){
    for (int i=15; i>3; i--){
    if (bricks[i-4]==0 && bricks[i]!=0 ){
        bricks[i-4]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }

    int i=0;
        i=rand()%16;
        while(bricks[i]!=0){
         i=rand()%16;
        }
        if (k==1) bricks[i]=2;
return bricks;
}

QVector<int> Helper::down(QVector<int> bricks)
{
    int k=0;
    for (int j=0; j<11; j++){
    for (int i=0; i<12; i++){
    if (bricks[i+4]==0 && bricks[i]!=0 ){
        bricks[i+4]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }


    for (int i=11; i>-1; i--){
    if (bricks[i]==bricks[i+4] ){
        bricks[i+4]=bricks[i]*2; bricks[i]=0;
        k=1;
}
    }


    for (int j=0; j<11; j++){
    for (int i=0; i<12; i++){
    if (bricks[i+4]==0 && bricks[i]!=0 ){
        bricks[i+4]=bricks[i]; bricks[i]=0; k=1;
}
    }
    }
    int i=0;
        i=rand()%16;
        while(bricks[i]!=0){
         i=rand()%16;
        }
        if (k==1) bricks[i]=2;
return bricks;
}
