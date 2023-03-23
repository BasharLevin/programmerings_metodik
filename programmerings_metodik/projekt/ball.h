#ifndef BALL_H
#define BALL_H
#include <QGraphicsEllipseItem>
#include <QObject>
#include "paddle.h"
#include "paddle2.h"

class ball: public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
    Q_PROPERTY(int width READ width)
    Q_PROPERTY(int height READ height)
    Q_PROPERTY(int speed READ speed )
public:
    ball();
    void setPaddle (paddle* player1);
    void setPaddle2(paddle2* player2);
    bool game_over();


    int width();
    int height();
    int speed();
    int score();

public slots:
    void move();

private:
    paddle *m_player;
    paddle2 *m_player2;
    int m_width = 30;
    int m_height = 30;
    int m_score = 0;
    qreal dx, dy, m_speed;
    bool state = true;
};

#endif // BALL_H
