/* The following code demonstrates how to use the 
.size() member function of vectors. It is used in the 
function showValues() by setting the size of the vector 
as the bound of the for loop */

#include <iostream> 
#include <vector> 
using namespace std; 

void showValues(vector<int>); 

int main() 
{
	vector<int> values; 

	for (int count = 0; count < 7; count ++) 
		values.push_back(count * 2); 

	showValues(values); 

	return 0; 
}

void showValues(vector<int> vect) 
{
	for (int count = 0; count < vect.size(); count++)
		cout << vect[count] << " "; 
	cout << endl; 
}
