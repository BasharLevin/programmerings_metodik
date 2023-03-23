#ifndef PADDLE2_H
#define PADDLE2_H
#include<QGraphicsRectItem>
#include<QObject>
#include<QKeyEvent>


class paddle2: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
    Q_PROPERTY(int height READ height)
    Q_PROPERTY(int width READ width)

public:
    paddle2();
    void keyPressEvent(QKeyEvent *event);
    enum MoveType{UP, DOWN};
    Q_ENUM(MoveType)
    bool validMove(MoveType moveType);
    void move2(MoveType moveType);
    int height();
    int width();
private:
    int m_height = 800;
    int m_width = 20;
    int m_moveStep = 15;
};



#endif // PADDLE2_H
