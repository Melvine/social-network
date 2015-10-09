#include "DlinkedList.h"

template <class D> DoublyLinkedList<D>::DoublyLinkedList(){
	root = NULL;
}
template <class D> DoublyLinkedList<D>::DoublyLinkedList(D data){
	Node p{data};
	root = p;
}
template <class D> DoublyLinkedList<D>::~DoublyLinkedList(){
	if(root == NULL){
		return;
	}
	else{
		Node *tmp = root;
		//get to the end of the linkedlist
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		//deletes every node starting from the back
		while(tmp != NULL){
			Node *unwanted = tmp;
			unwanted.~Node();
			tmp = tmp->previous;
			delete unwanted
		}
	}
}
template <class D> void DoublyLinkedList<D>::add(D data){
	Node p{data};
	if(root == NULL){
		root = p
	}
	else{
		Node *tmp = root;
		while(tmp != NULL){
			tmp = tmp->next;
		}
		tmp->next = p;
	}
}
template <class D> void DoublyLinkedList<D>::remove(D data){
	if(root == NULL){
		return;
	}
	else{
		Node *tmp = root;
		while(tmp != NULL){
			if(tmp->data == data){
				(tmp->previous)->next = tmp->next;
				delete tmp;
				return "found user for removable, should be removed";
			}
			tmp = tmp->next;
		}
		return;
	}
}
template <class D> Node<D>::Node(){
	this.data = NULL;
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::Node(D data){
	this.data = data;
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::~Node(){
	delete &data;
  delete previous;
  delete next;
}