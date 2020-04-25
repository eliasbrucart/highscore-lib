#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	const int socreSize = 10;
	class Score
	{
	private:
		int _pos;
	public:
		int _score[socreSize];
		string _name[socreSize];
		Score();
		~Score();
		void addPlayerToScore(string name, int score);
		void removePlayerToScore(string name);
		int getScoreList();
		int getScorePos(int pos);
		void clearScore();
	};
}

#endif