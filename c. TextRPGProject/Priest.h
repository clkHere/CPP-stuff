#ifndef PRIEST_H
#define PREIST_H
#include "Player.h"

class Priest : public Player
{
public: 
	Priest(string name, Race race) : Player(name, race, 100, 200)
	{
	}
	string attack() const
	{
		return "I will assault you with holy wrath!";
	}
};


#endif

