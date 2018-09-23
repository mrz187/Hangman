#include "frmmain.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QThread>

class I : public QThread
{
public:
    static void sleep(unsigned long secs) { QThread::sleep(secs); }
};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/images/splashdemo.png");
    QSplashScreen splash(pixmap);
    splash.show();
    //I::sleep(5);
    FrmMain w;
    w.show();
    splash.finish(&w);

    return a.exec();
}
