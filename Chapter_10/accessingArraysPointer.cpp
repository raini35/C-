#include <iostream> 
using namespace std; 

int main() {
	const int SIZE = 5; 
	int numbers[SIZE]; 

	cout << "Enter " << SIZE << " numbers: "; 
	for (int count = 0; count < SIZE ; count++)
		cin >> *(numbers + count); 

	for (int count = 0; count < SIZE; count++)
		cout << *(numbers + count) << " "; 
	cout << endl; 
	return 0; 
}
