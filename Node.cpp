#include "Node.h"

Node::Node(){

}
	                     
Node::Node(Contact contactIn ){
value = contactIn;
next  = NULL;                   
}



void Node::setValue(Contact contactIn){
     
value = contactIn;     
}

void Node::setNext(Node* nodeIn){

next = nodeIn;     
     
}



Contact Node::Value(){
     
return value;     
}

Node* Node::Next(){
     
return next;     
}



void Node::display(){
	
	Value().display();
}


