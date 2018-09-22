/*
  File: highscoreList.cpp
  Content: Methods of the class
  Author: mrz187
  Date: 22-09-2018
*/
#include "highscorelist.h"

HighscoreList::HighscoreList()
{
    /* Highscore* h = new Highscore(player,score);
    this->scoreList.append(h);*/
}

HighscoreList::~HighscoreList()
{
    for(int i=0;i<this->getHighscoreListSize();i++)
    {
        delete this->scoreList[i];
        this->scoreList.remove(i);
    }
}

Highscore *HighscoreList::getHighscore(int index)
{
    Highscore* h =NULL;
    if(index<this->getHighscoreListSize() &&index>=0 )
    {
        h = this->scoreList[index];
    }
    return h;
}

int HighscoreList::getHighscoreListSize()
{
    return this->scoreList.size();
}

bool HighscoreList::setHighscore(QString player, double score)
{
    bool ok=false;

    for(int i=0;i<this->getHighscoreListSize()|| ok==true;i++)
    {
        if(this->scoreList[i]->getPlayer()==player)
        {
            this->scoreList[i]->addNewScore(score);
            ok = true;
        }
    }
    if(!ok)
    {
        Highscore* h = new Highscore(player,score);
        this->scoreList.append(h);
    }
    return ok;
}

QVector<double> HighscoreList::getAllScoresFromPlayer(QString player)
{
    QVector<double> score;
    for(int i=0;i<this->getHighscoreListSize();i++)
    {
        if(this->scoreList[i]->getPlayer()==player)
        {
            score = this->scoreList[i]->getScoreList();
        }
    }
    return score;
}

void HighscoreList::sort()
{
    bool sort = false;
    Highscore* h;
    int sizeOfHighscoreList = this->scoreList.size();

    while(!sort)
    {
        for(int i=0;i<sizeOfHighscoreList-1;i++)
        {
            if(this->scoreList[i]->getScore()<this->scoreList[i+1]->getScore())
            {
                h=this->scoreList[i];
                this->scoreList[i]=this->scoreList[i+1];
                this->scoreList[i+1]=h;
            }

        }
    }
}


