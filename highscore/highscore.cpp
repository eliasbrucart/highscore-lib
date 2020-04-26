#include "highscore.h"

#include <iostream>

using namespace std;

namespace scorelib
{
	Score::Score()
	{
		_pos = 0;
		for (int i = 0; i < scoreSize; i++)
		{
			_score[i] = 0;
			_name[i] = " ";
		}
	}

	Score::~Score()
	{

	}

	void Score::addPlayerToScore(string name, int score)
	{
		/*if (_score[_pos] == 0 && _name[_pos] == " ") 
		{
			_score[_pos] = score;
			_name[_pos] = name;
		}
		_pos++;
		if (_score[_pos] != 0 && _pos > 0 && _pos < 2 && _name[_pos] == " ")
		{
			_score[_pos] = score;
			_name[_pos] = name;
		}*/

		for (int i = 0; i < scoreSize; i++)
		{
			if (_score[_pos] == i && _name[_pos] == " ")
			{
				_score[_pos] = score;
				_name[_pos] = name;
			}
			_pos++;
			if (_score[_pos] != i && _pos > i && _pos < i + 2 && _name[_pos] == " ")
			{
				_score[_pos] = score;
				_name[_pos] = name;
			}
		}
	}

	void Score::removePlayerToScore(int pos)
	{

	}

	void Score::getScoreList()
	{
		cout << "---===SocreList===---" << endl;
		for (int i = 0; i < scoreSize; i++)
		{
			cout << "Name => " << _name[i] << "Score => " << _score[i] << endl;
		}
		cout << "---===ScoreList===---" << endl;
	}

	int Score::getScorePos(int pos)
	{
		return _score[pos];
	}

	void Score::clearScore()
	{
		for (int i = 0; i < scoreSize; i++)
		{
			_score[i] = 0;
		}
	}
}