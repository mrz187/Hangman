/*
  File: highscore.cpp
  Content: Methods of the class
  Author: mrz187
  Date: 22-09-2018
*/
#include "highscore.h"

Highscore::Highscore(QString player, double score)
{
    this->player = player;
    this->score[0] = score;
}

Highscore::~Highscore()
{
    this->score.clear();
}

QString Highscore::getPlayer()
{
    return this->player;
}

double Highscore::getScore()
{
    return this->score[0];
}

QVector<double> Highscore::getScoreList()
{
    return this->score;
}

void Highscore::addNewScore(double newScore)
{
    this->score.append(newScore);
    this->sortBestScoreFromPlayer();
}

int Highscore::sizeOfScoreList()
{
    return this->score.size();
}

void Highscore::sortBestScoreFromPlayer()
{
    bool sort = false;
    double tmp;
    int vectorSize = this->sizeOfScoreList();

    while(!sort)
    {
        sort =true;
        for(int i =0;i<vectorSize-1;i++)
        {
            if(this->score[i]< this->score[i+1])
            {
                tmp =this->score[i];
                this->score[i]=this->score[i+1];
                this->score[i+1]=tmp;
            }
        }
    }
}
