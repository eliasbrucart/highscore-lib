#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
using namespace std;

namespace scorelib
{
	class Score
	{
	private:
		int _score[10];
		string _name[10];
	public:
		Score();
		~Score();
	};
}

#endif