#include "ball.h"
#include <QBrush>
#include <QTimer>
#include <QList>
#include "conf.h"
#include <cstddef>
#include <QMessageBox>
#include "QApplication.h"
/*!
 * \brief ball::ball
 * constructor
 */
ball::ball(){
    setRect(0, 0, m_width, m_height);
    setBrush((QBrush)Qt::green);
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
    dx = -1;
    dy = -1;
    m_speed = 10;

}
/*!
 * \brief ball::setPaddle
 * \param player
 * set the paddles
 */
void ball::setPaddle(paddle *player){
    m_player = player;
}
void ball::setPaddle2(paddle2* player2){
    m_player2 = player2;
}

/*!
 * \brief ball::width
 * \return the width of the ball
 */
int ball::width(){
    return m_width;
}
/*!
 * \brief ball::height
 * \return the hieght of the ball
 */
int ball::height(){
    return m_height;
}
/*!
 * \brief ball::speed
 * \return the speed of the ball
 */
int ball::speed(){
    return m_speed;
}/*!
 * \brief ball::score
 * \return the score
 */
int ball::score(){

    return m_score;
}
bool ball::game_over(){
    return state;
}
/*!
 * \brief ball::move
 * Handels the movment of the ball
 * When the ball collides with one of the paddles it changes speed and go the other way
 * When the ball gets out of the frame it changes speed and dicraction
 * ïf the ball gets behind the paddle the game stops
 */
void ball::move(){
    if(collidesWithItem(m_player) || collidesWithItem(m_player2)){
        dx =-dx;
        m_score++;
    }
    else if (y() <= 0){
        dy =-dy;
    }
    else if (x()>= 800 ){
        dx =-dx;
    }
    else if(y()>BOARD_HEIGHT - PADDLE_HEIGHT){
        dy = - dy;
    }
    else if (x() < 5){
    qApp->quit();
    }
    setPos(x() + (m_speed * dx), y() + (m_speed * dy));
}











