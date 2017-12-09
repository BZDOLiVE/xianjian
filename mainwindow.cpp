#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//绘制主菜单背景
void MainWindow::paintEvent(QPaintEvent *paintEvent)
{
   QPainter painter(this);
   painter.drawPixmap(0,0,width(),height(),QPixmap(":/images/mainwindow/MainWindow"));
}


//新生成一个世界窗口，主菜单销毁
void MainWindow::on_btnNewStart_clicked()
{
    map1 *w = new map1();
    QIcon icon(":/images/renwu/zhaolinger");
    w->setWindowIcon(icon);

    w->show();
    this->close();
    this->destroy();
}



//退出游戏
void MainWindow::on_btnExitGame_clicked()
{
    this->close();
}
