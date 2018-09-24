#ifndef ANIMATION_H
#define ANIMATION_H

#include <QObject>
#include <QPropertyAnimation>
#include "hangman.h"
#include <QLine>


class Animation : public QObject
  {

public:
    Animation(QObject parent);
    void startAnim();
private:
    QPropertyAnimation* anim;
    Hangman* stick;
};

#endif // ANIMATION_H
