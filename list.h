#ifndef LIST_H
#define LIST_H

template <class D>
class Node{
  public:
    Node();
    Node(D);
    Node *previous;
    Node *next;
    D data;
};

template <class D>
class List {
	public:
		virtual void insert (int, const D &)=0;
		/* Inserts the item right before position pos, growing the list by 1.
		pos must be between 0 and the current length of the list.
		(feel free return bool, if you want.) */

		virtual void remove (int)=0;
		/* Removes the element at position pos, shrinking the list by 1.
		pos must be between 0 and the current length of the list minus 1. */

		virtual void set (int, const D & )=0;
		/* overwrites position pos in the list with item.
		Does not change the length of the list.
		pos must be between 0 and the current length of the list minus 1. */

		virtual D const & get (int) const=0;
		/* returns the item at position pos, not changing the list.
		pos must be between 0 and the current length of the list minus 1. */
};

template <class D>
class LinkedList: public List<D>{
	public:
		LinkedList();
		~LinkedList();
	    void insert (int, const D &);
		void remove (int);
		void set (int, const D &);
		D const & get (int) const;
		Node<D>* getRoot(); 
	private:
		Node<D> *root;

};

template <class D>
class Array: public List<D>{
	public:
		Array();
		~Array();
	    void insert (int , const D &);
		void remove (int);
		void set (int, const D &);
		D const & get (int) const;
	private:
		int size;
		int elements;
		D *myarray;
};

#endif
