/* Using the '*' symbol on a pointer dereferences it and instead 
of printing the location it actually prints out the value 
associated to the location. */

#include <iostream> 
using namespace std; 

int main() 
{
	int x = 25; 
	int *ptr; 

	ptr = &x; 

	cout << "Here is the value in x, printed twice: \n"; 
	cout << x << " " << *ptr << endl; 

	*ptr = 100; 

	cout << "Once again, here is the value in x: \n"; 
	cout << x << " " << *ptr << endl; 	
	return 0; 
}
