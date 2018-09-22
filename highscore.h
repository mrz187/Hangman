/*
  File: highscore.h
  Content: Definition of the class
  Author: mrz187
  Date: 22-09-2018
*/

#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <QString>
#include <QVector>

class Highscore
{
public:
    Highscore(QString player,double score);
    ~Highscore();
    QString getPlayer();
    double getScore();
    QVector<double> getScoreList();
    void addNewScore(double newScore);
    int sizeOfScoreList();



private:
    QString player;
    QVector<double> score;
    void sortBestScoreFromPlayer();




};

#endif // HIGHSCORE_H
