/* The following code removes a value from the vector 
by using the member function .pop_back()
*/
#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{
	vector<int> values; 
	
	values.push_back(1); 
	values.push_back(2); 
	values.push_back(3); 
	cout << "The size of values is " << values.size() << endl; 

	cout << "Popping a value from the vector...\n"; 
	values.pop_back(); 
	cout << "The size of values is now " << values.size() << endl; 

	cout << "Popping a value from the vector...\n"; 
	values.pop_back(); 
	cout << "The size of values is now " << values.size() << endl; 
	
	return 0; 
}
