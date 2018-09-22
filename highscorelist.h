/*
  File: highscoreList.h
  Content: Definition of the class
  Author: mrz187
  Date: 22-09-2018
*/
#ifndef HIGHSCORELIST_H
#define HIGHSCORELIST_H
#include <QString>
#include <QVector>
#include <highscore.h>


class HighscoreList
{
public:
    HighscoreList();
    ~HighscoreList();
    Highscore* getHighscore(int index);
    int getHighscoreListSize();
    bool setHighscore(QString player,double score);
    QVector<double> getAllScoresFromPlayer(QString player);






private:
    QVector<Highscore*>scoreList;
    void sort();


};

#endif // HIGHSCORELIST_H
