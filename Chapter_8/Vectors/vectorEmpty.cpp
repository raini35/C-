/*The following code uses the member funciton .empty() to 
figure out if the current vector is empty or not. It 
returns true if it's empty and false if it's not empty. 
In the program, it used for data validation. 
*/

#include <iostream> 
#include <vector> 
using namespace std; 

double avgVector(vector<int>); 

int main() 
{
	vector<int> values; 
	int numValues; 
	double average; 

	cout << "How many values do you wish to average? "; 
	cin >> numValues; 

	for (int count = 0; count < numValues; count++)
	{	int tempValue; 

		cout << "Enter an integer value: "; 
		cin >> tempValue; 
		values.push_back(tempValue); 
	}
	
	average = avgVector(values); 
	cout << "Average: " << average << endl; 
	return 0; 
}

double avgVector(vector<int> vect) 
{
	int total = 0; 
	double avg = 0.0; 
	
	if (vect.empty())
		cout << "No values to average.\n"; 
	else
	{
		for( int count = 0; count < vect.size(); count++)
			total+= vect[count]; 
		avg = static_cast<double>(total)/vect.size(); 
	}
	return avg; 
}
