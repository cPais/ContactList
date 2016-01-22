#include <cstdlib>
#include <iostream>
#include <string>
#ifndef Contact_H
#define Contact_H

using namespace std;

class Contact         
//This is a simple class with 2 datamembers
//It's meant to hold the name and number of any individual or business
{
//Private DataMembers      
      private:
  
  	string name;   //The name of the contact is stored in this variable
  	string number; //The number of the contact is stored in this variable
  
  

      public:

//Constructors****************************************************             
  Contact(string nameIn, string numberIn);
  Contact();

//DataMember Manipulators**********************************************
  void setName(string nameIn);
  void setNumber(string numberIn);
  
  
  
//DataMember Retrievers**********************************************
  string getName();
  string getNumber();
  
//Additional Functions

  void   display();
  //This function simply displays the Contact's name and number in a neat bundle
  
  
};

#endif

