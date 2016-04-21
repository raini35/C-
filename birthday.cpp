#include <iostream> 
#include <string>
using namespace std; 

int main() {
	string birthday; 
	char answer; 

	cout << "When is your birthday? " << endl;
	cin >> birthday; 

	cout << "Is this your birthday? " << birthday; 
	cout << "\nY or N" << endl; 
	cin >> answer; 

	if((answer == 'Y') or (answer == 'y')) 
		cout << "Awesome! I will always remember your" 
			<< " birthday from now on!" << endl; 
	else 
		cout << "Sorry I got your birthday wrong :(" << endl;  

 
	return 0; 
}

