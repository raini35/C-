#include "NumberList.h"
using namespace std; 

//The following lines of code allows me to add a node using a member function. 

void NumberList::add(double number)
{
	if (head == NULL)
		head = new ListNode(number); 
	else 
	{
		ListNode *nodePtr = head; //Sets a different variable to head so that head doesn't change
		while(nodePtr->next != NULL)
			nodePtr = nodePtr->next; 
			
		//if nodePtr points to NULL that means that it's pointing to the last variable 
		//since we know that it is the last that's where we'll add the new variable 
		nodePtr->next = new ListNode(number); 
	}
}

//The following lines of code outputs the linked list 

void NumberList::displayList() const 
{
	ListNode *nodePtr = head; //Puts head into a different variable 
	while(nodePtr) //Once it gets to the last node or NULL it will stop 
	{
		cout << nodePtr->value << " "; 
		nodePtr = nodePtr->next; 
	}
}

//The following lines of code deallocates the memory used by the list 

NumberList::~NumberList() 
{
	ListNode *nodePtr = head; 
	while(nodePtr!=NULL)
	{
		ListNode *garbage = nodePtr; 
		nodePtr = nodePtr->next; 
		delete garbage; 
	}
}
