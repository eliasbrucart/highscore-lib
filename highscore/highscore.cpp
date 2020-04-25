#include "highscore.h"

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

	void Score::removePlayerToScore(string name)
	{

	}

	int Score::getScoreList()
	{

	}

	int Score::getScorePos(int pos)
	{

	}

	void Score::clearScore()
	{

	}
}