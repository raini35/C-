//
//  ContactList.cpp
//  Linked-Lists
//
//  Created by Rainier Go on 4/29/16.
//  Copyright © 2016 Rainier. All rights reserved.
//
#include "ContactList.h"
using namespace std;

//The ContactList class has two classes: head & size
//head points to null or to the memory of the newest node
//size tells the user the size of the List
ContactList::ContactList():head(NULL),size(0)
{}

void ContactList :: addToHead(const string& name)
{
    //the following code points to the memory of
    //the new contact
    Contact* newOne = new Contact(name);
    
    //this check if the list is empty
    //otherwise it sets the new
    if(head == 0)
    {
        head = newOne;
    }
    else
    {
        newOne-> next = head;
        head = newOne; 
    }
    
    size++; 
} 
