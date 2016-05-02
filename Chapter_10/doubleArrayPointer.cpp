/*The following lines of code uses pointer notation and subscript notation
are used to traverse the array */ 

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() 
{
	const int NUM_COINS = 5; 
	double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0}; 
	double *doublePtr; //doublePtr points to doubles 

	doublePtr = coins; //This sets the doublePtr to coins[0]

	cout << doublePtr << endl; 
	cout << setprecision(2); 
	cout << "Here are the values in the coins array:\n"; 
	for (int count = 0; count < NUM_COINS; count++)
		cout << doublePtr[count] << " "; 

	cout << "\nAnd here they are again:\n"; 
	for(int count = 0; count < NUM_COINS; count++)
		cout<< *(coins + count) << " "; 
	cout << endl; 

	return 0; 
}
