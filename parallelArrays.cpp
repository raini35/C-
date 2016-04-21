/*
The following code explains parallel arrays. The two arrays 
hours and payRate are connected by the variable called index. 
When two arrays have a relationship linked by a subscript they 
are called parallel Arrays
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() 
{
	const int NUM_EMPS = 5; 
	int index; 
	int hours[NUM_EMPS]; 
	double payRate[NUM_EMPS]; 
	double grossPay; 

	cout << "Enter the hours worked and hourly pay rates of "
		<< NUM_EMPS << " employees. \n"; 

	for (index = 0; index < NUM_EMPS; index++)
	{ 
		cout << "Hours worked by employee #" << (index + 1) << ": "; 
		cin >> hours[index]; 
		cout << "Hourly pay rate for employee #" << (index + 1) << ": "; 
		cin >> payRate[index]; 
	}

	cout << "\nHere is the gross pay for each employee:\n"; 
	cout << fixed << showpoint << setprecision(2); 
	for (index = 0; index < NUM_EMPS; index++)
	{
		grossPay = hours[index] * payRate[index]; 
		cout << "Employee #" << (index + 1); 
		cout << ": $" << setw(7) << grossPay << endl; 
	}

	return 0; 
}
