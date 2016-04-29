//
//  main.cpp
//  Linked-Lists
//
//  Created by Rainier Go on 4/29/16.
//  Copyright © 2016 Rainier. All rights reserved.
//

#include "ContactList.h"
using namespace std;

int main()
{
    ContactList* cl1= new ContactList();
    
    string name;
    
    while(true)
    {
        cout << "Enter the name of the contact or q to quit." << endl;
        cin >> name;
        if(name == "q")
            break;
        cl1->addToHead(name); 
    }
}
