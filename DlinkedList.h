#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <class D>
class DoublyLinkedList {
  public:
    DoublyLinkedList();
    DoublyLinkedList(D);
    ~DoublyLinkedList();

    void add(D);
    void remove(D);
   
  private:
	Node *root
};

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
#endif