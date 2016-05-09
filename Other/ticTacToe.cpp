#include <iostream>
using namespace std;

int main() {
	// your code goes here
	return 0;
}

void board() 
{
        system("cls"); 
        cout << "\n\n\Tic Tac Toe\n\n"; 
        
        cout << "Player 1(X) - Player 2(O)" << endl; << endl; 
        cout << endl; 
        
        cout << "     |     |     " << endl;
       cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

        
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        
        cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
        
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        
       cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
        cout << "     |     |     " << endl << endl; 
}
