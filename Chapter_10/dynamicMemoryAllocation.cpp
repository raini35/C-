/*The following lines of code is my first experience 
with dynamic memory allocation */

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main() 
{

	double *sales,
		total = 0.0, 
		average; 
	int numDays; 

	cout << "How many days of sales figures do you wish "; 
	cout << "to process? "; 
	cin >> numDays; 
	
	//We request dyanmically allocated memory by using the new operator
	sales = new double[numDays]; 

	cout << "Enter the sales figures below.\n"; 
	for (int count = 0; count < numDays;  count++)
	{
		cout << "Day " << (count + 1) << ": "; 
		cin >> sales[count]; 
	}

	for (int count = 0; count < numDays; count++) 
	{
		total += sales[count]; 
	}

	average = total / numDays; 

	cout << setprecision(2) << fixed << showpoint; 
	cout << "\nTotal Sales: $" << total << endl; 
	cout << "Average Sales: $" << average << endl; 

	//It is important to delete sales so that the memory 
	//is freed up for other use
	delete [] sales; 
	sales = 0; 
	return 0; 

}
