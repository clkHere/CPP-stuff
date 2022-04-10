/* --- SCOPE CHALLENGE
		-Create a function called modifyGlobal
			-void and paremeterless
		-Create a global variable called 'counter', initialize it to '0'
			-Inside modifyGlobal, increment country by 1
			-Inside main, call modifyGlobal inside a for-loop
				--iterate 100 times
			-Print out the value of counter before and after loop
*/

#include <iostream>
using namespace std; 

void modifyGlobal(); //---REMEMBER TO VOID FUNCTIONS!!!!
int counter = 0; 


int main() {

	cout << "Value of counter before loop: " << counter << endl;

	for (int i = 0; i < 100; i++) {
		modifyGlobal();
		
	}
	
	cout << "Value of counter after loop: "<<counter << endl;

	return 0; 
}

void modifyGlobal() {
	counter++;
}