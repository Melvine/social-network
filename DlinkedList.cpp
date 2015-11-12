#include "DlinkedList.h"
#include <string>
#include <iostream>

using namespace std;

template <class D> DoublyLinkedList<D>::DoublyLinkedList(){
	root = NULL;
}
template <class D> DoublyLinkedList<D>::DoublyLinkedList(D _data){
	//in development
	add(_data);
}
template <class D> DoublyLinkedList<D>::~DoublyLinkedList(){
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
	// 		tmp = tmp->previous;
	// 		delete unwanted;
	// 	}
	// 	//delete tmp;
	// }
}
template <class D> int DoublyLinkedList<D>::add(D _data){
	Node<D> *p = new Node<D>(_data);
	if(root == NULL){
		root = p;
		root->data.setId(0);
		return 0;
	}
	else{
		int count = 1;
		Node<D> *tmp = root;
		while(tmp->next != NULL){
			tmp = tmp->next;
			count++;
		}
		tmp->next = p;
		tmp->next->data.setId(count);
		return 0;
	}
}
template <class D> int DoublyLinkedList<D>::remove(int _id){
	//development
	if(root == NULL){
		return 1;
	}
	else{
		Node<D> *tmp = root;
		while(tmp != NULL){
			if(tmp->data.getId() == _id){
				if(tmp->previous != NULL)
					(tmp->previous)->next = tmp->next;
				if(tmp->next != NULL)
					(tmp->next)->previous = tmp->previous;

				delete tmp;
				tmp = NULL;
				return 0;
			}
			tmp = tmp->next;
		}
		return 1;
	}
}

template <class D> Node<D>::Node(){
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::Node(D _data){
  data = _data;
  previous = NULL;
  next = NULL;
}

template <class D> Node<D>* DoublyLinkedList<D>::getRoot(){
	return root;
}
