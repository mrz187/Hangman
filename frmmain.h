#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>
#include <dictionary.h>

namespace Ui {
class FrmMain;
}

class FrmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = 0);
    ~FrmMain();

private:
    Ui::FrmMain *ui;
    Dictionary* dict;

};

#endif // FRMMAIN_H
