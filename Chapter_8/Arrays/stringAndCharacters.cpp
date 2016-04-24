/* 
The following showcases how strings are treated like arrays. 
Each letter of the string is a variable in the array. You can
access them simply by using the name of the string and then 
using subscripts. Ex. arrayName[subscript]
*/

#include <iostream> 
#include <string> 
#include <cctype> 
using namespace std; 

int main() 
{
	char ch; 
	int vowelCount = 0; 
	string sentence; 

	cout << "Enter any sentence you wish and I will \n"
		<< "tell you how many vowels are in it.\n"; 
	getline(cin, sentence); 
	
	for (int pos = 0; pos < sentence.length(); pos++)
	{
		
		ch = toupper(sentence[pos]); 

		switch(ch)
		{	case 'A': 
			case 'E': 
			case 'I': 
			case 'O':
			case 'U': vowelCount++; 
		}

	}
	
	cout << "There are " << vowelCount << " vowels in the sentence.\n"; 
	return 0; 
} 
