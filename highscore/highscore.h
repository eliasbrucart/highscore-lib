#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	void addPlayerToScore(string namePlayer, int scorePoints);
	void removePlayerToScore(int posScore);
	int getScorePos(int posScore);
	string getScoreName(int posName);
	void clearScore();
}

#endif