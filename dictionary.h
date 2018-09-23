/*
  File: dictionary.h
  Content: Definition of the class
  Author: mrz187
  Date: 22-09-2018
*/
#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <QFile>
#include <QString>
#include <QDebug>
#include <QVector>
#include <QDir>

class Dictionary
{
public:
    Dictionary();
    bool chooseWord(); // aus dict picken ,wenn es das gleiche ist neu suchen
    QString getWord(); // gepicktes word zurückgeben
    bool checkWord();


private:
    QVector<QString>dictionaryList;
    QString word;
    void randomList(); //List random machen

};

#endif // DICTIONARY_H
