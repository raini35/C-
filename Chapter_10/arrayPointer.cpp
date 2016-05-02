/* The following line of code proves that an array name, 
without brackets and a subscript, actually represents the starting
address of the array. We use the '*' symbol to dereference the array 
which outputs the first number of the array.*/

#include <iostream> 
using namespace std; 

int main() 
{
	short numbers[] = {10, 20, 30, 40}; 

	cout << "The first element of the array is "; 
	cout << *numbers << endl; 
	return 0; 
}
