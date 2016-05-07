#include <iostream>
using namespace std; 

class Node {
protected:
	struct ListNode{
		double value; 
		ListNode *next;
		ListNode(double value1 = 0, ListNode *next1 = NULL)
		{
			value = value1; 
			next = next1; 
		} 
	}; 
	ListNode *head;
public: 
	NumberList() {head = NULL; }  
	~NumberList(); 
	void add(double number); 
}; 

void NumberList::add(double number) 
{
	if (head == NULL)
		head = new ListNode(number); 
	else 
	{
		ListNode *nodePtr = head; 

		while(nodePtr != NULL) 
			nodePtr = nodePtr->next; 

		nodePtr->next = new ListNode(number); 
	}
}
int main(){

	
} 
