#include "list.h"
#include <iostream>
using namespace std;

template <class D> LinkedList<D>::LinkedList(){
	
};
template <class D> void LinkedList<D>::insert (int pos, const D & item){
	Node<D> *tmpRoot = root;
	Node<D> *p = new Node<D>(item);

	if(tmpRoot == NULL){
		tmpRoot = p;
	}
	else{
		int i = 0;
		while(tmpRoot->next != NULL){
			i++;
			if(tmp)
		}

	}


};
template <class D> void LinkedList<D>::remove (int pos){};
template <class D> void LinkedList<D>::set (int pos, const D & item){};
template <class D> D const & LinkedList<D>::get (int pos) const{
	
};

