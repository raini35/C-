//
//  Contact.hpp
//  Linked-Lists
//
//  Created by Rainier Go on 4/29/16.
//  Copyright © 2016 Rainier. All rights reserved.
//


#ifndef Contact_h
#define Contact_h

#include <iostream>
#include <string>

class Contact
{
    friend std:: ostream& operator<<(std:: ostream& os, const
                                     Contact& c);
    friend class ContactList;
public:
    Contact(std::string name="none");
private:
    std:: string name;
    Contact* next;
};


#endif /* Contact_h */
