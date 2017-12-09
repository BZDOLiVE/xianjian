#ifndef MAP1_H
#define MAP1_H

#include <QMainWindow>
#include <QtGui>
#include <QPushButton>
#include <QTimer>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QEvent>
#include <QSound>
#include <QGraphicsItem>
#include <QtWidgets>
#include <QTimer>
#include <QDebug>

#include "zhujue.h"
#include "diren.h"
#include "mainwindow.h"

namespace Ui {
class map1;
}

class map1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit map1(QWidget *parent = 0);
    ~map1();
    void keyPressEvent(QKeyEvent *e);


private slots:
    void on_returnToMainWindow_clicked();


private:
    Ui::map1 *ui;
    QGraphicsScene *scene1;

    Zhujue *zhaolinger;
    Diren *shilaimu;
};

#endif // MAP1_H
