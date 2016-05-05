#include <iostream> 
using namespace std; 

void displayValues(const int *numbers, int size); 

int main() 
{
	const int SIZE = 6; 

	const int array1[SIZE] = {1, 2, 3, 4, 5, 6}; 
	
	int array2[SIZE] = {7, 8, 9 ,10, 11, 12}; 

	displayValues(array1, SIZE); 

	displayValues(array2, SIZE); 

	return 0; 
}


void displayValues(const int *numbers, int size)
{

	for(int count = 0; count < size; count++)
	{
		cout << *(numbers+count) << " " ; 
	}
	cout << endl; 
}
