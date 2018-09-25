#include "frmmain.h"
#include "ui_frmmain.h"


FrmMain::FrmMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmMain)
{
    ui->setupUi(this);

    this->scene = new QGraphicsScene(this);
    this->ui->graphicsView->setScene(this->scene);
    this->stick = new Hangman();
    QGraphicsItem *ball =new QGraphicsEllipseItem(0,0,20,20);
    this->timer = new QTimeLine(5000);
    this->timer->setFrameRange(0,100);
    this->anim = new QGraphicsItemAnimation(this);
    this->anim->setItem(this->stick);
    this->anim->setTimeLine(timer);

    for(int i=0;i<200;i++)
    {

        this->anim->setScaleAt(i/200.0,i*0.0,1+4*(i/200.0));
        qDebug() << QString::number((this->stick->y()));
    }




    this->ui->graphicsView->fitInView(this->scene->sceneRect());
    this->scene->addItem(this->stick);
    this->timer->start();



}

FrmMain::~FrmMain()
{
    delete ui;
}

void FrmMain::on_btnPlay_clicked()
{

}

void FrmMain::on_btnHighscore_clicked()
{

}

void FrmMain::on_btnOptions_clicked()
{

}
