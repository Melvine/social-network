#include "DlinkedList.h"
#include <string>
#include <iostream>

using namespace std;

template <class D> DoublyLinkedList<D>::DoublyLinkedList(){
	root = NULL;
}
template <class D> DoublyLinkedList<D>::DoublyLinkedList(D _data){
	//in development
	root =  new Node<D>();
	root->data = _data;
}
template <class D> DoublyLinkedList<D>::~DoublyLinkedList(){
	// //in development 
	// if(root == NULL){
	// 	return;
	// }
	// else{
	// 	Node<D> *tmp = root;
	// 	//get to the end of the linkedlist
	// 	while(tmp->next != NULL){
	// 		tmp = tmp->next;
	// 	}
	// 	//deletes every Node starting from the back
	// 	while(tmp != NULL){
	// 		Node<D> *unwanted = tmp;
	// 		unwanted.~Node();
	// 		tmp = tmp->previous;
	// 		delete unwanted;
	// 	}
	// }
}
template <class D> int DoublyLinkedList<D>::add(D data){
	Node<D> *p = new Node<D>(data);
	if(root == NULL){
		root = p;
		return 0;
	}
	else{
		Node<D> *tmp = root;
		while(tmp != NULL){
			tmp = tmp->next;
		}
		tmp->next = p;
		return 0;
	}
}
template <class D> int DoublyLinkedList<D>::remove(D data){
	//development
	if(root == NULL){
		return 1;
	}
	else{
		Node<D> *tmp = root;
		while(tmp != NULL){	
			if(tmp->data.getUsername().compare(data.getUsername()) == 1){					 
				(tmp->previous)->next = tmp->next;
				(tmp->next)->previous = tmp->previous;
				delete tmp;
				return 0;
			}
			tmp = tmp->next;
		}
		return 1;
	}
}
template <class D> Node<D>::Node(){
	//data = NULL;
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::Node(D _data){
	data = _data;
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::~Node(){
	delete &data;
  delete previous;
  delete next;
}



template <class D> Node<D>* DoublyLinkedList<D>::getRoot(){
	return root;
}