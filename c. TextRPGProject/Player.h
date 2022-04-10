#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std; 

enum Race { Human, Elf, Dwarf, Orc, Troll };
class Player
{
public:
	Player(string name, Race race, int hitPoints, int magicPoints);
	//GETTERS
	string getName() const; 
	Race getRace() const;
	string whatRace(); 
	int getHitPoints() const; 
	int getMagicPoints() const; 
	//SETTERS
	void setName(string name);
	void setRace(Race race); 
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);
	virtual string attack() const = 0; 
private: 
	string name; 
	Race race; 
	int hitPoints; 
	int magicPoints; 

};



#endif
