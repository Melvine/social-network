#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

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
    virtual int add(D) = 0;
    virtual int remove(int)= 0;
};

template <class D>
class DoublyLinkedList: public List<D>{
  public:
    DoublyLinkedList();
    DoublyLinkedList(D);
    ~DoublyLinkedList();

    int add(D);
    int remove(int);

    Node<D>* getRoot();
  private:
	  Node<D> *root;
};
#endif