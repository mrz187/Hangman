/*
  File: dictionary.cpp
  Content: Methods of the class
  Author: mrz187
  Date: 22-09-2018
*/
#include "dictionary.h"

Dictionary::Dictionary()
{




    QDir::setCurrent("D:/Moritz/Projekte/Hangman");

    QFile dictionary("Dictionary.txt");
    if(!dictionary.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "File not exist!";
    }
    QTextStream in(&dictionary);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        this->dictionaryList.append(line);
    }
    this->randomList();
}


QString Dictionary::getWord()
{

}

bool Dictionary::checkWord()
{

}

void Dictionary::randomList()
{

}
