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
#include <cstdlib>
#include <QRandomGenerator>

class Dictionary
{
public:
    Dictionary();
    bool chooseWord();
    void getWord(); // neue funktion get length fuer view erstellen
    bool checkWord();
    int sizeOfDictionary();


private:
    QVector<QString>dictionaryList;
    QString word;
    QRandomGenerator *genRand;
    void randomShuffle(); //List random machen

};

#endif // DICTIONARY_H
