#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	const int scoreSize = 10;
	class Score
	{
	private:
		int _pos;
	public:
		int _score[scoreSize];
		string _name[scoreSize];
		Score();
		~Score();
		void addPlayerToScore(string name, int score);
		void removePlayerToScore(string name);
		void getScoreList();
		int getScorePos(int pos);
		void clearScore();
	};
}

#endif