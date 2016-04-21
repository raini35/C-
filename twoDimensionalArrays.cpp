#include <iostream> 
#include <iomanip> 
using namespace std; 

const int NUM_COLS = 4; 
const int TBL1_ROWS = 3; 
const int TBL2_ROWS = 4; 

/*
The number of columns is required in the function prototype 
& header b/c of the way two dimensional arrays are stored. 
One row follows another (See Figure 8-16 pg 550). When the 
compiler generates code for accessing the elements of a two-dimensional
array, it needs to know how many bytes separate the rows in memory. 
The # of columns is a critical factor in this calculation. 
*/
void showArray( const int [][NUM_COLS], int);  //Function prototype 

int main() 
{
	int table1[TBL1_ROWS][NUM_COLS] = { {1, 2, 3, 4}, 
					    {5, 6, 7, 8}, 
					    {9, 10, 11, 12} }; 
	int table2[TBL2_ROWS][NUM_COLS] = { {10, 20, 30, 40}, 
					    {50, 60, 70, 80}, 
					    {90, 100, 110, 120}, 
					    {130, 140, 150, 160} }; 

	cout << "The contents of table1 are: \n"; 
	showArray(table1, TBL1_ROWS); 
	
	cout << "The contents of table2 are: \n"; 
	showArray(table2, TBL2_ROWS); 

	return 0; 
}

//The following code uses two for loops to print out the 
//content of two dimensional arrays

void showArray( int const array[][NUM_COLS], int numRows)
{
	for(int row= 0; row < numRows; row++)
	{
		for(int col =0; col < NUM_COLS; col++)
		{
			cout << setw(5) << array[row][col] << " "; 
		} 
		cout << endl; 
	}
}
