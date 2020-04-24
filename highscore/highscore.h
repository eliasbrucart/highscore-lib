#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	class Score
	{
	private:
	public:
		int _score[10];
		string _name[10];
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