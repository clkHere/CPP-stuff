#include <iostream> 
#include "Circle.h"
#include <cmath>
using namespace std; 

void printCircleData(Circle& c); 

int main()
{
	Circle circ1; 
	Circle circ2(5); 

	printCircleData(circ1); 
	printCircleData(circ2);



	return 0; 
}

void printCircleData( Circle& c)
{
	cout << "Circle with radius " << c.getRadius() << endl; 
	cout << "\tCircumference: " << c.circumference() << endl; 
	cout << "\tArea: " << c.area() << endl;
	cout << endl; 
}