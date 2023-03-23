#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    void on_pushButton_clicked();


    //void on_lcdNumber_windowIconTextChanged(const QString &iconText);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
