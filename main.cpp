#include "Contact.h"
#include "Node.h"
#include "ContactList.h"
//Please note the application requires the above files to run


void menu();
//This function displays the menu.

Contact getContact();
//This function prompts the user to enter contact information.
//It creates an object of class Contact using the received user input as construction parameters.
//The new Contact is then returned.

string askName();
//This function prompts the user for a contact name.
//The contact name is then returned.


int main(int argc, char** argv) {
	
const int Sentinel = 0;  //The value 0 Exits the program if entered by the user.

int input = 1; //Variable 'input' is where the value entered by the user is stored.

string name; //This value stores the name of a contact. 
//It is meant to be instantiated by the askName() function


ContactList clientList;

cout << "This program is designed to maintain contact information" << endl;


 
		while(input != Sentinel) //Loop structure. Loop will only exit when 0 is entered.
			{
				menu();          //display menu and choices
				cin >> input;    //User inputs a choice. Choice is saved in 'input'
				                 
				                 //Perform appropriate operation pending on the input value.
				if(input == 1)
					{ cout <<"(Add Contact)"<< endl;
					  clientList.addToHead(getContact());
					}
					
		   else if(input == 2)
					{ 
						if(clientList.empty())
							{ cout <<"Error:Cannot delete from empty contact list" << endl; }
					
						else
					  		{
								cout <<"(Delete Contact)" << endl;
					  			name = askName();
								if(clientList.verify(name))
								{clientList.delete_ByName(name);}
								else{ cout << "Error:Contact '" << name << "' not found in the contact list" << endl;}
							} 		
					}
					
		   else if(input == 3)
		   				if(clientList.empty())
							{ cout <<"Error:Cannot display empty contact list" << endl; }
						
						else{
							cout << "(Display all Contacts)"<< endl; 
					        clientList.displayList();
							}
					
		   else if(input == 4)
		   			
		   			if(clientList.empty())
						{ cout <<"Error:Cannot display specific contact from empty contact list" << endl; }
					
					else{
						cout <<"(Display Specific Contact)"<< endl;
					 	name = askName();
						if(clientList.verify(name))
						{clientList.get_ByName(name)->display();}
						
						else
					    {cout << "Error: Contact '" << name << "' not found in the contact list" << endl;}
					}
					
		
			}	
		
	return 0;
}




void menu(){
	cout << "\n\n\n\n\n\n\n\n";
	cout << "Please enter the task you'd like to perform." << endl;
	cout <<"1)Add Contact"<< endl;
	cout <<"2)Delete Contact"<< endl;
	cout <<"3)Display all Contacts"<< endl;
	cout <<"4)Display specific Contact"<< endl;
	cout <<"0)Exit Program" << endl;
	
}

Contact getContact(){
	string name, number;
	cout << "Please enter the 'Name' of the contact you'd like to enter(case sensitive):";
	cin >> name;
	cout << endl;
	
	cout << "Please enter the 'Number' of the contact you'd like to enter:";
	cin >> number;
	cout << endl;
	return Contact(name,number);
}

string askName(){
	string name;
	cout << "Please enter the 'Name' of the contact(case sensitive): ";
	cin >> name;
	cout << endl;
	return name;
}
