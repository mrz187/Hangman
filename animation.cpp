#include "animation.h"



Animation::Animation(QObject parent)
{
    this->anim = new QPropertyAnimation(parent);
    this->stick = new Hangman();
}

void Animation::startAnim()
{

    this->anim->setDuration(1000);
    this->anim->setStartValue(this->stick->getLine());
    this->anim->setEndValue(QLine(this->stick->getLine().p1(),QPoint(200,200)));
    this->anim->start();

}
