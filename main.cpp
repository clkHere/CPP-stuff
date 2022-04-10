#include <iostream>
using namespace std;

int main()
{
	//prompt user for age AND gender
	//age is int, gender is char
	//get of f or F and are 60 or over
	//You qualify for the discount
	//You do not qualify for the discount

	int age;
	char gender;

	cout << "What is your age?" << endl;
	cin >> age;
	cout << "What is your gender?" << endl;
	cin >> gender;
	

	if (age >= 60, gender == 'F', gender == 'f')
	{
		cout << "You qualify for the discount!" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount." << endl;
	}


	return 0;
}