#include <iostream> 
using namespace std; 

int main() {
	const int SIZE = 10; 
	int numbers[SIZE] = {15, 6, 3, 11, 22, 4, 0, 1, 9, 12}; 

	int count; 
	int highest = numbers[0]; 
	int lowest = numbers[0]; 

	cout << "The following numbers are in the array: " << endl; 

	//The following prints out each of the numbers on a 
	//new line 
	for( count = 0; count < SIZE; count++) 
		cout << numbers[count] << endl;  
	
	//The following finds the highest number in the array 
	for (count = 1; count < SIZE; count++) 
	{
		if(numbers[count] > highest)
			highest = numbers[count]; 
	}	

	//The following finds the lowest number in the array 
	for (count = 1; count < SIZE; count++)
	{
		if(numbers[count] < lowest)
			lowest = numbers[count]; 
	}

	cout << "\nThe highest number in the array is " << highest << endl; 
	cout << "The lowest number in the array is " << lowest << endl; 

	return 0; 
}
