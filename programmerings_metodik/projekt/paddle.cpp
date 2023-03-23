#include "paddle.h"
#include <QBrush>
/*!
 * \brief paddle::paddle
 * constructor
 */
paddle::paddle(){
    setRect (0, 0, m_width, m_height);
    setBrush((QBrush)Qt::black);

}
/*!
 * \brief paddle::move
 * \param moveType
 * handles the movment of the paddle by subtracting a number from the y position
 */
void paddle::move(paddle::MoveType moveType){
    if (validMove(moveType) && moveType == UPP)
        setPos(x(), y() - m_moveStep);
    else if(validMove(moveType) && moveType == NER)
        setPos(x(), y() + m_moveStep);
}


/*!
 * \brief paddle::keyPressEvent
 * \param event2
 * a key event that calls the move function deppinding on the pressed key
 */
void paddle::keyPressEvent(QKeyEvent *event2){
    switch (event2->key()){
    case Qt::Key_Up:
        move(UPP);
        break;
    case Qt::Key_Down:
        move(NER);
        break;
    default:
        break;
    }
}
/*!
 * \brief paddle::validMove
 * \param moveType
 * Checks if the move is valid to make sure the paddle does not get out of frame
 * \return
 */
bool paddle::validMove(paddle::MoveType moveType){
    if (moveType == UPP)
        return (y() - m_moveStep) >= 0;
    else if (moveType == NER)
        return (y() + m_moveStep) <=460;
}

/*!
 * \brief paddle::width
 * \return width of the paddle
 */
int paddle::width(){
    return m_width;
}/*!
 * \brief paddle::height
 * \return heigh of the ball
 */
int paddle::height(){
    return m_height;
}






