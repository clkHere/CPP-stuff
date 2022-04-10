#include "Priest.h"
using namespace std; 

Priest::Priest(int hitPoints, int magicPoints) : Player(hitPoints, magicPoints)
{
}

string Priest::attack()
{
	return "I will assault you with Holy Wrath!";
}