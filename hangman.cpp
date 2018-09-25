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
    line.setLine(100,0,100,400);
    painter->setPen(Qt::black);
    painter->setRenderHint(QPainter::Antialiasing);
    painter->drawRect(rec);

}
