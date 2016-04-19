#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    const int SIZE = 12;
    string name[SIZE] =
            {"January", "February", "March", "April",
                "May", "June", "July", "August",
                "September", "October", "November", "December"};
    int days[SIZE] =
            {31, 28, 31, 30,
                31, 30, 31, 31,
                30, 31, 30, 31};
    
    cout << "This program tells you how many days are \n" <<
        "in a certain month.\n\n" << endl;
    
    for(int month = 1; month <= SIZE; month++) {
        cout << setw(2) << month << " " << name[month -1] << endl;
    }
    
    cout << "\nEnter the number of the month you want: ";
    cin >> choice;
    
    cout << "\nThe month of "<< name[choice -1] << " has "
        << days[choice-1] << " days. \n";
    
    return 0;
}


