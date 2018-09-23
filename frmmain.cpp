#include "frmmain.h"
#include "ui_frmmain.h"


FrmMain::FrmMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FrmMain)
{
    ui->setupUi(this);
    this->dict = new Dictionary();
}

FrmMain::~FrmMain()
{
    delete ui;
}
