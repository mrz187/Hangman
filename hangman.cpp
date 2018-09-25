#include "hangman.h"

Hangman::Hangman()
{

}

QRectF Hangman::boundingRect() const
{
    return QRectF(100,100,100,100);
}

void Hangman::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec(100,100,100,100);

    QLine line;
    line.setLine(0,50,0,100);
    painter->setPen(Qt::black);
   // painter->setRenderHint(QPainter::Antialiasing);
    painter->drawLine(line);

}

void Hangman::advance(int phase)
{
    update();
}
