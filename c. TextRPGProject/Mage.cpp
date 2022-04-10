#include "Mage.h"
using namespace std; 

Mage::Mage(int hitPoints, int magicPoints) : Player(hitPoints, magicPoints)
{
}

string Mage::attack()
{
	return "I will crush you with the power of my arcane missiles!";
}