#include "list.h"
#include <iostream>
using namespace std;

template <class D> LinkedList<D>::LinkedList(){};
template <class D> LinkedList<D>::~LinkedList(){};
template <class D> void LinkedList<D>::insert (int pos, const D & item){
	Node<D> *p = new Node<D>(item);

	//checks if root is NULL else insert the item here
	if(root == NULL){
		root = p;
		return;
	}
	Node<D> *current = root;

	//goes thru the linkedlist
	int count = 0;

	if(pos == 0){
		p->next = root;		
		root = p;
		return;
	}
	while(count < pos){
		count++; //works with the next node but currently on the node before it

		if(current == NULL){ //if pos is greater than the size of the list
			return;
		}

		if (count == pos){
			if(current->next == NULL){ //if the pos is null
				current->next = p;
				return;
			}
			else if(current->next != NULL){ //when the pos has an item already
				p->next = current->next;
				p->previous = current;
				current->next = p;
				return;
			}
		}

		//iterate through the list
		current = current->next;
	}
};
template <class D> void LinkedList<D>::remove (int pos){
	Node<D> *tmp = root;

	//checks if root is NULL else insert the item here
	if(root == NULL){
		return;
	}
	Node<D> *current = root;
	//goes thru the linkedlist
	int count = 0;

	if(pos == 0){
		if(root->next != NULL){
			tmp = root->next;
			(root->next)->previous = NULL;
			delete root;	//delete root address
			root = NULL;	//reinitialize root as NULL
			root = tmp;
		}
		return;
	}
	while(count < pos){
		count++; //work with the next node but currently on the node before it

		if(current == NULL){ //if pos is greater than the size of the list
			return;
		}

		if (count == pos){
			if(current->next == NULL){ //if the pos is null
				return;
			}
			if(current->next->next != NULL){ //when the pos has an item
				tmp = current->next->next;
				tmp->previous = current;
				delete current->next;	//delete root address
				current->next = NULL;	//reinitialize root as NULL
				current->next = tmp;
			}
		}

		//iterate through the list
		current = current->next;
	}
};
template <class D> void LinkedList<D>::set (int pos, const D & item){
	Node<D> *p = new Node<D>(item);

	//checks if root is NULL else insert the item here
	if(root == NULL){
		root = p;
		return;
	}
	Node<D> *current = root;

	//goes thru the linkedlist
	int count = 0;

	if(pos == 0){
		if(root->next != NULL){
			(root->next)->previous = p;
			p->next = (root->next);
		}
		root = p;
		return;
	}
	while(count < pos){
		count++; //work with the next node but currently on the node before it

		if(current == NULL){ //if pos is greater than the size of the list
			return;
		}

		if (count == pos){
			if(current->next == NULL){ //if the pos is null
				current->next = p;
				return;
			}
			if(current->next->next != NULL){ //when the pos has an item already
				p->next = (current->next->next);
				(current->next->next)->previous = p;
			}

			current->next = p;
		}

		//iterate through the list
		current = current->next;
	}
};
template <class D> Node<D>* LinkedList<D>::getRoot(){
	return root;
};
template <class D> D const & LinkedList<D>::get (int pos) const{
	Node<D> *current = root;
	for(int i = 0; i < pos; i++){
		current = current->next;
	}
	return current->data;
};

template <class D> Node<D>::Node(){
  previous = NULL;
  next = NULL;
}
template <class D> Node<D>::Node(D _data){
  data = _data;
  previous = NULL;
  next = NULL;
}



