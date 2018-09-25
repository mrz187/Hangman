#ifndef HANGMAN_H
#define HANGMAN_H

#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QPainter>

class Hangman : public QGraphicsItem
{
public:
    Hangman();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR);



};

#endif // HANGMAN_H
