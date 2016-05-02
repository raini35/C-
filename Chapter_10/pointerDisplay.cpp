#include <iostream> 
using namespace std; 

int main() 
{
	const int SIZE = 8; 
	int set[ ] = {5, 10, 15, 20, 25, 30, 35, 40}; 
	int *numPtr; //numPtr points to integers

	numPtr = set; //sets numPtr to array "set"

	cout << "The numbers in set are:\n"; 
	for(int index = 0; index < SIZE; index++)
	{
		cout << *numPtr << " "; 
		numPtr++; 
	}

	cout << "\nThe numbers in set backwards are: \n"; 
	for (int index = 0; index < SIZE; index++)
	{
		numPtr--; 
		cout << *numPtr << " "; 
	}
	return 0; 
}
