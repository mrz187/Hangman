#ifndef HANGMAN_H
#define HANGMAN_H

#include <QObject>
#include <QLine>

class Hangman: public QObject
{
public:
    Hangman();
    QLine getLine();


private:
    QLine line;


};

#endif // HANGMAN_H
