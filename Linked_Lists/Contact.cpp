//
//  Contact.cpp
//  Linked-Lists
//
//  Created by Rainier Go on 4/29/16.
//  Copyright © 2016 Rainier. All rights reserved.
//

#include "Contact.h" 

using namespace std;

Contact::Contact(string n): name(n), next(NULL)
{}

ostream& operator<<(ostream& os, const Contact& c)
{
    return os << "Name: " << c.name; 
}
