#include "hangman.h"

Hangman::Hangman()
{

}

QLine Hangman::getLine()
{
    this->line.setPoints(QPoint(100,100),QPoint(100,100));
    return this->line;
}


