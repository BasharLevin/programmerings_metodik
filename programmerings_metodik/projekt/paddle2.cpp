#include "paddle2.h"
#include <QBrush>

paddle2::paddle2(){
    setRect (0, 0, m_width, m_height);
    setBrush((QBrush)Qt::black);

}

void paddle2::move2(paddle2::MoveType moveType){
    if (validMove(moveType) && moveType == UP)
        setPos(x(), y() - m_moveStep);
    else if(validMove(moveType) && moveType == DOWN)
        setPos(x(), y() + m_moveStep);
}



void paddle2::keyPressEvent(QKeyEvent *event){
    switch (event->key()){
    case Qt::Key_W:
        move2(UP);
        break;
    case Qt::Key_S:
        move2(DOWN);
        break;
    default:
        break;
    }
}
bool paddle2::validMove(paddle2::MoveType moveType){
    if (moveType == UP)
        return (y() - m_moveStep) >= 0;
    else if (moveType == DOWN)
        return (y() + m_moveStep) <=460;
}

int paddle2::width(){
    return m_width;
}
int paddle2::height(){
    return m_height;
}






