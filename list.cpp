#include "list.h"
#include <iostream>
using namespace std;

template <class D> LinkedList<D>::LinkedList(){
	root = NULL;
};
template <class D> LinkedList<D>::~LinkedList(){};
template <class D> void LinkedList<D>::insert (int pos, D & item){
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
		tmp = root->next;

		if(tmp != NULL)
			tmp->previous = NULL;

		delete root;	//delete root address
		root = NULL;	//reinitialize root as NULL
		root = tmp;
		
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
				current->next = tmp;
			}
			else{
				current->next = NULL;
			}
			delete current->next;
			current->next = NULL;

		}

		//iterate through the list
		current = current->next;
	}
};

template <class D> void LinkedList<D>::set (int pos, D & item){
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
template <class D> D & LinkedList<D>::get (int pos){
	Node<D> *current = root;
	for(int i = 0; i < pos; i++){
		current = current->next;
	}
	return current->data;
};






template <class D> Array<D>::Array(){
	size = 10;
	elements = 0;
	myarray = new D[size];
};
template <class D> Array<D>::~Array(){
	//delete linkedlist and array objects
};
template <class D> void Array<D>::insert (int pos, D & item){
	if(pos > elements)
		return;

	elements++;

	//creates a new array
	if(elements == size){
		size = size * 2;
		D *newarray = new D[size];
		//putting elements into new array
		for(int i = 0; i < elements; i++){
			newarray[i] = myarray[i];
		}
		myarray = NULL;
		myarray = newarray; //myarray has now doubled in size
	}

	for(int i = elements; i > pos; i--){
		myarray[i] = myarray[i-1];
	}
	myarray[pos] = item;
};
template <class D> void Array<D>::remove (int pos){
	elements--;
	for(int i = pos; i < elements; i++){
		myarray[i] = myarray[i+1];
	}
};
template <class D> void Array<D>::set (int pos, D & item){
	if(pos > elements)
		return;

	myarray[pos] = item;
	//need to clean old user
};
template <class D> D & Array<D>::get (int pos){
	return myarray[pos];
};
template <class D> int Array<D>::length(){
	return elements;
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



