#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include "Contact.h"

class Node //This class is part of the ContactList datastructure.
//It has only a Contact, and points to the next Contact that is stored.
{
  private:
          Contact value;
          Node* next;
         
  
  public:
           Node();
           Node(Contact contactIn);
           
           
           void        setValue(Contact contactIn);
           void        setNext(Node* nodeIn);
           
           
           Contact     Value();
           Node*       Next();
		  
		   void		   display();  
      
     
  
  
};

#endif

