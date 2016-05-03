/*The following program uses pointers as function parameters 
When using the function you have to make sure that you pass
the address of the variable not the variable itself. */


#include <iostream> 
using namespace std; 

void getNumber(int *); 
void doubleValue(int *); 

int main() 
{
	int number = 40; 
	
//	getNumber(&number); //Make sure to use the address not the value
	
	doubleValue(&number); 

	cout << "The double of the value is: " << number << endl; 

	return 0; 

}


void getNumber(int *input){

	cout << "Enter an integer number: "; 
	cin >> *input; 
}

void doubleValue(int *val){
	*val *=2; 
}
