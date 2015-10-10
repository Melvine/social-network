#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <class D>
class Node{
  public:
    Node();
    Node(D);
    ~Node();
   
  private:
    D data;
    Node *previous;
    Node *next;
};

template <class D>
class DoublyLinkedList {
  public:
    DoublyLinkedList();
    DoublyLinkedList(D);
    ~DoublyLinkedList();

    int add(D);
    int remove(D);
   
  private:
	Node<D> *root;
};
#endif