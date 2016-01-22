#ifndef ContactList_H
#define ContactList_H

#include "Node.h"

class ContactList
{
  private:
          Node* head_ptr = NULL; 
          
          //The below are all recursive functions.
          //They have counterparts located in the public space of the class that invoke and call them.
          
          Node*     get_ByName_Private(Node* nodeIn, string nameIn);
          void   delete_ByName_Private(Node* nodeIn, Node* prev_Node, string nameIn);
		  void     displayList_Private(Node* nodeIn); 
		  
          bool	verify_Private(Node* nodeIn, string nameIn);
          
  
  public:
           ContactList();
           void addToHead(Contact contactIn);
		   
		   
		   Node* get_ByName(string nameIn); 
		 void delete_ByName(string nameIn);
		   void displayList();
		   void displayHead();
		   
		   bool verify(string nameIn);
		   bool empty();
		   
      
     
  
  
};

#endif

