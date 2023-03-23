#ifndef PADDLE_H
#define PADDLE_H
#include<QGraphicsRectItem>
#include<QObject>
#include<QKeyEvent>


class paddle: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
    Q_PROPERTY(int height READ height)
    Q_PROPERTY(int width READ width)

public:
    paddle();
    void keyPressEvent(QKeyEvent *event2);
    enum MoveType{UPP, NER};
    Q_ENUM(MoveType)
    bool validMove(MoveType moveType);
    void move(MoveType moveType);
    int height();
    int width();
private:
    int m_height = 100;
    int m_width = 20;
    int m_moveStep = 15;
};


#endif // PADDLE_H
