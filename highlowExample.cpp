#include <iostream> 
#include <fstream> 
#include <iomanip> 
using namespace std; 

int main() 
{
	const int NUM_OFFICES = 12; 
	ifstream dataIn; 
	int office; 
	double sales[NUM_OFFICES], 
		totalSales = 0.0, 
		averageSales, 
		highestSales, 
		lowestSales; 

	//Open the data fiel 
	dataIn.open("sales.dat"); 
	if(!dataIn)
		cout << "Error opening data file.\n"; 
	else 
	{
		for (office = 0; office < NUM_OFFICES; office++)
			dataIn >> sales[office]; 
		dataIn.close(); 

		//Sum all the array elements 
		for(office = 0; office < NUM_OFFICES; office++)
			totalSales += sales[office]; 

		//Calculate average sales 
		averageSales = totalSales / NUM_OFFICES; 

		//Find highest and lowest sales amounts 
		highestSales = lowestSales = sales[0]; 
		for (office = 1; office < NUM_OFFICES; office++)
		{
			if (sales[office] > highestSales)
				highestSales = sales[office]; 
			else if (sales[office] < lowestSales) 
				lowestSales = sales[office]; 
		}

		//Display results 

		cout << fixed << showpoint << setprecision(2); 
		cout << "Total sales   $" << setw(9) << totalSales << endl; 
		cout << "Average sales $" << setw(9) << averageSales << endl; 
		cout << "Highest sales $" << setw(9) << highestSales << endl; 
		cout << "Lowest sales  $" << setw(9) << lowestSales << endl; 

	}

	return 0; 
}
