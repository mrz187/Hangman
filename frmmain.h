#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>
#include <QtCore>
#include <hangman.h>

namespace Ui {
class FrmMain;
}

class FrmMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = 0);
    ~FrmMain();

private slots:
    void on_btnPlay_clicked();

    void on_btnHighscore_clicked();

    void on_btnOptions_clicked();

private:
    Ui::FrmMain *ui;
    QGraphicsScene *scene;
    Hangman * stick;

};

#endif // FRMMAIN_H
