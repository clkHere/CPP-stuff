/*
RETURN THE SUM OF BUILT-IN ARRAY ELEMENTS
	-Write a function called sumArray
		--Two Paremeters: (1) Array of integers; (2) Size of array (an integer)
	-Iterate through the array, summing the integers in the array
	-Return the sum of these integers
*/

#include <iostream>
#include <array>
using namespace std;

int sumArray(int myArray[], int arraySize); //two parameters

int main()
{
	int myArray[]{ 2,5,2,10,20,15,100,25 }; //calling the array with values
	int sum = sumArray(myArray, 8); // storing array in 'sum' variable w/ sumArray function

	cout << "Sum of the elements in myArray is " << sum << endl;

	return 0; 
}//end main

int sumArray(int myArray[], int arraySize)
{
	int sum = 0; //sets sum as 0 and ready to take numbers

	for (int i = 0; i < arraySize; i++) //for-loop to run through the numbers until i=0
	{
		sum += myArray[i]; //sum = sum + myArray[i]; stores the answer per stack
		//
	}
	return sum;
}
