#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <class DlinkedList>
class DoublyLinkedList {
  public:
    DoublyLinkedList();
    DoublyLinkedList(Data);
    ~DoublyLinkedList();

    void add(Data);
    void remove(Data);
   
  private:
	Node *root
};

class Node{
  public:
    Node();
    Node(Data);
    ~Node();
   
  private:
    Data d;
    Node *previous;
    Node *next;
};

template <class Data>
class Data {
  public:
    Data();
    Data(Data);
    ~Data();
};

#endif