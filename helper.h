#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <QVector>
class Helper : public QObject
{
    Q_OBJECT
public:
    explicit Helper(QObject *parent = nullptr);

signals:
public slots:
   QVector<int> newGame();
   QVector<int> right(QVector<int> bricks);
   QVector<int> left(QVector<int> bricks);
   QVector<int> up(QVector<int> bricks);
   QVector<int> down(QVector<int> bricks);
};

#endif // HELPER_H
