#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <Qmessagebox>
#include "paddle.h"
#include "paddle2.h"
#include "ball.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // sets the game space
    QGraphicsScene * scene = new QGraphicsScene(this);
    scene->setSceneRect (0, 0, width(), height());
    // creats a new paddle and sets its properties
    paddle *player = new paddle();
    player->setPos(5,(height() / 2.0) - player->height());
    player->setBrush(Qt::green);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    /*paddle2 *paddle_2 = new paddle2();
    paddle_2->setPos(775,(height() / 2.0) - paddle_2->height());
    paddle_2->setBrush(Qt::green);
    paddle_2->setFlag(QGraphicsItem::ItemIsFocusable);
    paddle_2->setFocus();*/
    // creats a ball
    ball *Ball = new ball();
    Ball->setPaddle(player);
    //Ball->setPaddle2(paddle_2);

    //sets the position of the ball
    Ball->setPos(player->x() + Ball->width() + 12, player->y() + player->height() / 2);

    scene->addItem(player);
    //scene->addItem(paddle_2);
    scene->addItem(Ball);

    // Edits the game view
    ui->gameView->setScene(scene);
    ui->gameView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gameView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->gameView->setGeometry(0, 0, width(), height());
    //ui->lcdNumber->windowIconTextChanged(Ball->score());
}

MainWindow::~MainWindow()
{
    delete ui;

}

/*!
 * \brief MainWindow::on_pushButton_clicked
 * this function shows a message with a bit of information about the game
 */
void MainWindow::on_pushButton_clicked()
{
      QMessageBox::information(this, "Om", "Prog_metodik projekt", "Stäng");
}




/*void MainWindow::on_lcdNumber_windowIconTextChanged(const QString &iconText)
{
    windowIconTextChanged(iconText);
}*/

