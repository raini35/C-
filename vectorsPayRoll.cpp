/*The following code is the first time I used 
vectors & its member function push_back(). The following 
gets the amount of employees the user wants to enter 
and then gets their name, hours worked and their pay rate. 
#vectors #push_back()
 */

#include <iostream> 
#include <iomanip> 
#include <string> 
#include <vector> 
using namespace std;

int main() 
{
	vector<double> hours; 
	vector<string> names; 
	vector<double> payRate; 
	double grossPay; 
	int numEmployees; 
	int index; 

	cout << "How many employees do you have? " << endl; 
	cin >> numEmployees; 

	cout << "Enter the name, hours worked & hourly pay rate of the " 
		<< numEmployees << " employees. \n\n"; 
	
	for (index = 0; index < numEmployees; index++)
	{
		double tempHours; double tempRate; string tempName; 
		
		cout << "What is employee #" << (index + 1) 
			<< "\'s name?\n"; 
		cin >> tempName; names.push_back(tempName); 

		cout << "Hours worked by " << tempName << ": "; 
		cin >> tempHours; hours.push_back(tempHours); 

		cout << "Hourly pay rate for " << tempName << ": ";
		cin >> tempRate; payRate.push_back(tempRate);  
		
		cout << endl; 
	}

	cout << "Here is the gross pay rate for each employee:\n"; 
	cout << fixed << showpoint << setprecision(2); 

	for (index = 0; index < numEmployees ; index++) 
	{
		grossPay = hours[index] * payRate[index]; 
		cout << (index + 1) << ". " << names[index]; 
		cout << ": $" << setw(7) << grossPay << endl; 
	}
	return 0; 
}
