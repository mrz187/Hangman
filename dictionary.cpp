/*
  File: dictionary.cpp
  Content: Methods of the class
  Author: mrz187
  Date: 22-09-2018
*/
#include "dictionary.h"

Dictionary::Dictionary()
{
    QString newPath;
    QDir dir(QDir::current());
    dir.cdUp();
    dir.cd("Hangman");
    newPath = dir.path();
    QDir::setCurrent(newPath);

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
    this->randomShuffle();

    this->word ="";

    this->genRand = QRandomGenerator::global();


    for(int i=0;i<this->dictionaryList.size();i++)
    {
        qDebug() << this->dictionaryList[i];
    }
    getWord();

}


void Dictionary::getWord()
{
    bool sameWords = true;
    while(sameWords)
    {
        int randomNum =this->genRand->bounded(0,this->sizeOfDictionary());
        if(this->word!=this->dictionaryList[randomNum])
        {
            this->word=this->dictionaryList[randomNum];
            sameWords=false;
            //qDebug()<< QString::number(randomNum);
        }
    }

}

bool Dictionary::checkWord()
{

}

int Dictionary::sizeOfDictionary()
{
    return this->dictionaryList.size();
}

void Dictionary::randomShuffle()
{
    for(int i =0;i<3;i++)
    {
        std::random_shuffle(this->dictionaryList.begin(),this->dictionaryList.end());
    }

}
