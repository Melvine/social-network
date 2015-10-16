#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <class D>
class Node{
  public:
    Node();
    Node(D);
    ~Node();
    Node *previous;
    Node *next;
    D data;
};

template <class D>
class DoublyLinkedList {
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