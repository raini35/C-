void clearList( const Node* &obj) 
{
	Node*current = obj; 
	Node*deleteMe = obj; 
	
	while(current != NULL) 
	{
		current = current->getNext(); 
		delete deleteMe; 
		deleteMe = current; 	
		
	}
	
}