//
//  ContactList.h
//  Linked-Lists
//
//  Created by Rainier Go on 4/29/16.
//  Copyright © 2016 Rainier. All rights reserved.
//

#ifndef ContactList_h
#define ContactList_h


#include "Contact.h"

class ContactList
{
public:
    ContactList();
    void addToHead(const std::string& );
private:
    Contact* head;
    int size;
    
    
};
#endif /* ContactList_h */
