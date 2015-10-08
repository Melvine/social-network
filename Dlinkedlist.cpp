#include "DlinkedList.h"

DoublyLinkedList::DoublyLinkedList(){
	root = NULL;
}
DoublyLinkedList::DoublyLinkedList(Data d){
	Node *root = new Node(d);
}
DoublyLinkedList::~DoublyLinkedList(){

}
void DoublyLinkedList::Add(Data d){
	Node p = new Node(d);
	if(root == NULL){
		root = p
	}
	else{
		tmp = root;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = p;
	}
}
void DoublyLinkedList::Remove(Data d){
	if(root == NULL){
		return;
	}
	else{
		tmp = root;
		while(tmp != NULL){
			if(tmp.data == d){
				(tmp->previous)->next = tmp->next;
				delete tmp;
				return "found user for removable, should be removed";
			}
			tmp = tmp->next;
		}
		return;
	}
}

Node::Node(){
	this.d = null;
    Node *previous = null;
    Node *next = null;
}
Node::Node(Data d){
	this.d = d;
    Node *previous = null;
    Node *next = null;
}
Data::Data(){

}
Data::Data(Data d){

}
Data::~Data(){

}
