#include "highscore.h"

#include <iostream>

using namespace std;

namespace scorelib
{
	void addPlayerToScore(string name, int score)
	{
		if (_score[_pos] == 0 && _name[_pos] == " ")
		{
			_score[_pos] = score;
			_name[_pos] = name;
		}
		else 
		{
			_pos++;
			if (_score[_pos] == 0 && _name[_pos] == " ")
			{
				_score[_pos] = score;
				_name[_pos] = name;
			}
		}
	}

	void removePlayerToScore(int pos)
	{
		_score[pos] = 0;
		_name[pos] = " ";
	}

	void getScoreList()
	{
		cout << "---===SocreList===---" << endl;
		for (int i = 0; i < scoreSize; i++)
		{
			cout << "Name => " << _name[i] << "Score => " << _score[i] << endl;
		}
		cout << "---===ScoreList===---" << endl;
	}

	int getScorePos(int pos)
	{
		return _score[pos];
	}

	void clearScore()
	{
		for (int i = 0; i < scoreSize; i++)
		{
			_score[i] = 0;
			_name[i] = " ";
		}
	}
}