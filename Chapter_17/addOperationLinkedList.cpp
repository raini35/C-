void sortList(const Class* &obj) {
	Class* current = obj; 
	Class* deleteMe = obj; 
	while (current != NULL) 
	{
		double garbage; 
		if((current->getValue() % 2) == 0)
		{
				delete deleteMe; 
		}
		current = current->getNext();
		deleteMe = current; ≈
	}
}