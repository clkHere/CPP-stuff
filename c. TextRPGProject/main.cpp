#include <iostream>
#include <string> 
#include <vector> 
#include "Player.h"
#include "Mage.h"
#include "Priest.h"
#include "Warrior.h"


using namespace std; 


void printMainMenu();
void printRaceMenu();

Player* createPlayer(string playerName, int typeNum, int raceNum);
void doCleanup(vector<Player*>playerList);
Race getRace(int raceNum);
void printAll(vector<Player*>playerList);

int main()
{
	int choice;
	int raceNum; 
	string playerName; 

	vector<Player*>playerList;

	printMainMenu(); 
	cin >> choice; cin.get(); //consume newline

	while (choice != 0)
	{
		cout << "What would you like to name your character?" << endl;
		getline(cin, playerName);

		printRaceMenu();
		cin >> raceNum; cin.get();

		Player* tempPlayer = createPlayer(playerName, choice, raceNum);
		playerList.push_back(tempPlayer);

		//-----next round?
		printMainMenu();
		cin >>choice;
		cin.get();
	}

	printAll(playerList);
	doCleanup(playerList);

	cout << "GAME OVER!" << endl;

	


	return 0; 
}

void printMainMenu()
{
	cout << endl;
	cout << "Which of the following would you like?" << endl;
	cout << "\t1 - Create a Warrior" << endl;
	cout << "\t2 - Create a Priest" << endl;
	cout << "\t3 - Create a Mage" << endl;
	cout << "\t0 - Finish creating player characters" << endl;
}

void printRaceMenu()
{
	cout << "Now which race do you want?" << endl;
	cout << "\t1 - Human" << endl;
	cout << "\t2 - Elf" << endl;
	cout << "\t3 - Dwarf" << endl;
	cout << "\t4 - Orc" << endl;
	cout << "\t5 - Troll" << endl;
}

Player* createPlayer(string playerName, int typeNum, int raceNum)
{
	Race playerRace = getRace(raceNum);
	Player* tempPlayer = nullptr;

		if (typeNum == 1) 
		{ 
			tempPlayer = new Warrior(playerName, playerRace); 
		}
		else if (typeNum == 2) 
		{ 
			tempPlayer = new Priest(playerName, playerRace); 
		}
		else if (typeNum == 3) 
		{
			tempPlayer = new Mage(playerName, playerRace);
		}
		return tempPlayer;
}

void doCleanup(vector<Player*>playerList) {
	for (Player* player : playerList)
	{
		delete player;
	}
	playerList.clear();
}

Race getRace(int raceNum)
{
	Race race; 
	if (raceNum == 1) { race = Human; }
	else if (raceNum == 2) { race = Elf; }
	else if (raceNum == 3) { race = Dwarf; }
	else if (raceNum == 4) { race = Orc; }
	else if (raceNum == 5) { race = Troll; }

	return race;
}

void printAll(vector<Player*>playerList)
{
	for (Player* player : playerList)
	{
		cout << "I'm a " << player->whatRace() << " and my attack is: " << player->attack() << endl;
	}
}