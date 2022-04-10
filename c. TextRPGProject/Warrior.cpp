#include <iostream>
#include "Warrior.h"
using namespace std; 

Warrior::Warrior(int hitPoints, int magicPoints) : Player(hitPoints, magicPoints)
{
}
string Warrior::attack()
{
	return "I will destroy you with my sword, foul demon!";
}