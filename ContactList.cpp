#include "ContactList.h"

//Constructor 
ContactList::ContactList(){
	
}
//Constructor Ends here -------->


//addToHead 
void ContactList::addToHead(Contact contactIn){
	Node* temp = new Node(contactIn);
	
	if(head_ptr == NULL){
		
		head_ptr = temp;
		
	}
	else{
		temp->setNext(head_ptr);
		head_ptr = temp;
	}
  cout <<"Contact " << temp->Value().getName() <<" successfully entered" << endl;
}
//addToHead ends here-------->



//get_ByName
//This function takes a name as a parameter
//It then searches through the list and when it finds that name
//It returns the node that name belongs to.

//The name passed in as a parameter should be verified before this function is called. See main.cpp
Node* ContactList::get_ByName(string nameIn){
	
	
		return get_ByName_Private(head_ptr, nameIn);		
}

Node* ContactList::get_ByName_Private(Node* nodeIn, string nameIn){
	
	if(nodeIn != 0)
	{
		
			if(nodeIn->Value().getName() == nameIn)
				{return nodeIn;}
			else
			{return get_ByName_Private(nodeIn->Next(), nameIn);}			
	}	
}
//get_byName ends here -------->

//delete_ByName
//This function takes a name as a parameter
//It then searches through the list and when it finds that name
//It deletes that name and maintains the Contact List's integrity.

//The name passed in as a parameter should be verified before this function is called. See main.cpp
void ContactList::delete_ByName(string nameIn){
	
		
	
		if(head_ptr->Value().getName() == nameIn){
			Node* curr = head_ptr;
			head_ptr = head_ptr->Next();
			delete curr;
			cout <<"Contact " << nameIn <<" successfully deleted" << endl;
		}
		else{
		delete_ByName_Private(head_ptr->Next(),head_ptr, nameIn);
			}
}

void ContactList::delete_ByName_Private(Node* nodeIn, Node* prev_Node, string nameIn){
	
	
	if(nodeIn != 0)
	{
		
			if(nodeIn->Value().getName() == nameIn)
				{Node* curr = nodeIn;
				 prev_Node->setNext(nodeIn->Next());
				 delete curr;
				cout <<"Contact " << nameIn <<" successfully deleted" << endl;
				}
			else
			{ delete_ByName_Private(nodeIn->Next(),prev_Node->Next(), nameIn);}			
	}	
}
//delete_byName Ends here ------->

//displayList
//This function goes through the contactlist and displays every contact
//The contactlist being displayed should not be empty. That is verified beforehand, see main.cpp
void ContactList::displayList(){
	
	 if(head_ptr->Next() == 0 ){
		displayHead();
	}
    else{displayList_Private(head_ptr);	}
}

void ContactList::displayList_Private(Node* nodeIn){
	
	if(nodeIn != 0){
			nodeIn->display();
			displayList_Private(nodeIn->Next());
			
	}	
}

void ContactList::displayHead(){
	head_ptr->display();
}
//The display functions end here ----------->


//The remaining functions are supplementary
//These functions must be used to verify only possible, non-error causing operations take place. 

//If for instance the contact "Sam" does not exist, this function will ensure operations to display, delete,
//or otherwise manipulate "Sam" fail to occur. See main.cpp .


//Verify() returns a boolean value of true if the name sent in is present within the contactlist
//If the name sent in is not in the contactlist, it returns false.
bool ContactList::verify(string nameIn){
	return verify_Private(head_ptr, nameIn);
}

bool ContactList::verify_Private(Node* nodeIn, string nameIn){
	
	if(nodeIn != 0)
	{
		
			if(nodeIn->Value().getName() == nameIn)
				{return true;}
			else
			{return verify_Private(nodeIn->Next(), nameIn);}			
	}
	else{return false;}
	
}

//Verify the linked list is not empty.
//If the list is empty, this will return true. Otherwise, it will return false. 
//Most operations will be unavailable while the list is empty.
bool ContactList::empty(){
	if(head_ptr == NULL)
	return true;
	else{
		return false;
	}
}


	




  

