#include <iostream>
#include <windows.h>
#include "complexnum.cpp"
using namespace std; 

//	1. DEFINING THE STRUCTURE	***
struct rectangle //defining the structure
{
//	2. SIZE OF STRUCTURE		***
	float len; //primitive variables are 2 bytes in size
	float wid;
};


int main()
{
//	3.DECLARING A STRUCTURE		***
	//struct rectangle r;  //declaration
	cout << "Initializing struct values at this point...\n" << endl;
	Sleep(2000); //system pause for 2 seconds
	
	struct rectangle r = { 10,5 }; //declaration + initialization
	struct student Cal = { 1, "Calvin King", "Account", "301 Brook Pine Drive" };
	
	cout << "Current values are: 'len' (" << r.len << ") and 'wid'(" << r.wid << ")\n" << endl;
	Sleep(1000); //system pause for 1 second



//4. ACCESSING MEMBERS OF A STRUCTURE
	cout << "Accessing members of the structure at this point \n" << endl;
	Sleep(100);
	r.len = 15; //accessing and changing 'len' to 15 using dot access modifier
	r.wid = 10; 
	cout << "\t---Changed 'len' from 10 to 15\n";
	cout<<"\t---Changed 'wid' from 5 to 10\n"<<endl;
	cout << "\n";

Sleep(1000);
	
cout << "Multiplying the new r.len & r.wid values to equal:\n";
	cout << r.len * r.wid << endl;
	cout << "\t" << Cal.name << "\n" << "\t" << Cal.dept << endl;



	return 0; 
}
