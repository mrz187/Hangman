#include "frmmain.h"
#include "ui_frmmain.h"


FrmMain::FrmMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmMain)
{
    ui->setupUi(this);
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
