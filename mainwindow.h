#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QPushButton>
#include <QTimer>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QEvent>
#include <QSound>
#include "map1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *paintEvent);//绘制主菜单背景

private slots:
    void on_btnNewStart_clicked();

    void on_btnExitGame_clicked();


private:
    Ui::MainWindow *ui;
    QPixmap pixmapBackground;//背景图片
};

#endif // MAINWINDOW_H
