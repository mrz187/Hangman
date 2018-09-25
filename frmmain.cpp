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
    this->scene->addItem(this->stick);




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
