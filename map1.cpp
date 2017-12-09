#include "map1.h"
#include "ui_map1.h"

map1::map1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::map1)
{
    ui->setupUi(this);
    //加载地图
    scene1 = new QGraphicsScene;
    scene1->setSceneRect(0,0,1600,900);//设置scene大小为1600x900
    QPixmap mapForest(":/images/map/map1");
    scene1->setBackgroundBrush(mapForest);


    ui->graphicsView->setScene(scene1);

    //加载赵灵儿
    zhaolinger = new Zhujue("zhaolinger");
    zhaolinger->setStartPos(300,200);
    scene1->addItem(zhaolinger);

    shilaimu = new Diren("shilaimu", zhaolinger);
    shilaimu->setStartPos(50,50);
    scene1->addItem(shilaimu);


    //设置时间进行，一秒三十帧，每一帧执行一次所有item的advance函数
    QTimer *timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), scene1, SLOT(advance()));
    timer->start(1000/33);

}

map1::~map1()
{
    delete ui;
}

//键盘输入wasd控制人物移动
void map1::keyPressEvent(QKeyEvent *e)
{
    //int a = zhaolinger->x();
    //int b = zhaolinger->y();
    switch(e->key())
    {
        case Qt::Key_W:
            //zhaolinger->setPos(a,b-15);
            zhaolinger->moveBy(0,-15);
            break;
        case Qt::Key_A:
            //zhaolinger->setPos(a-15,b);
            zhaolinger->moveBy(-15,0);
            break;
        case Qt::Key_S:
            //zhaolinger->setPos(a,b+15);
            zhaolinger->moveBy(0,15);
            break;
        case Qt::Key_D:
            //zhaolinger->setPos(a+15,b);
            zhaolinger->moveBy(15,0);
            break;

    }
}


//返回主菜单，销毁当前界面
void map1::on_returnToMainWindow_clicked()
{
    MainWindow *w = new MainWindow;
    this->close();
    w->show();
    this->destroy();
}
