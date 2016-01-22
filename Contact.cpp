#include "Contact.h"

Contact::Contact(string nameIn, string numberIn) 
{
  setName(nameIn);
  setNumber(numberIn);
  
}

Contact::Contact(){}

//DataMember Setters**********************************************
void Contact::setName(string nameIn)
{
     name = nameIn;       
}
     
void Contact::setNumber(string numberIn)
{
     number = numberIn;   
}



//DataMember Getters**********************************************
string Contact::getName()
{
return name;
}

string Contact::getNumber()
{
return number;
}

void Contact::display(){
	cout << "**********Contact Entry**********"<< endl;
	cout << "Name:"   << getName() << endl;
	cout << "Number:" << getNumber() << endl;
	cout << "*********************************"<< endl << endl;
}



  

