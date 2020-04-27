#include "highscore.h"

#include <iostream>

using namespace std;

namespace scorelib
{
	static const int scoreSize = 10;
	static int pos = 0;
	static int score[scoreSize] = {0,0,0,0,0,0,0,0,0,0};
	static string name[scoreSize] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " "};

	void addPlayerToScore(string namePlayer, int scorePoints)
	{
		if (pos < scoreSize)
		{
			if (score[pos] == 0 && name[pos] == " ")
			{
				score[pos] = scorePoints;
				name[pos] = namePlayer;
				pos++;
			}
		}
	}

	void removePlayerToScore(int posScore)
	{
		score[posScore] = 0;
		name[posScore] = " ";
	}


	int getScorePos(int posScore)
	{
		return score[posScore];
	}

	string getScoreName(int posName)
	{
		return name[posName];
	}

	void clearScore()
	{
		for (int i = 0; i < scoreSize; i++)
		{
			score[i] = 0;
			name[i] = " ";
		}
		pos = 0;
	}
}