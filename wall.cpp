#include "wall.h"

Wall::Wall(){
  DoublyLinkedList <WallPost> wallList{};
}
Wall::Wall(D data){
  DoublyLinkedList <WallPost> wallList{data};
  wallList.data = data ;
    Node *previous;
    Node *next;
}
Wall::~Wall(){
  wallList.~DoublyLinkedList();
  delete wallList;
}
void Wall::add(WallPost){
  
}
void Wall::remove(WallPost); 
string Wall::getWallList();    



WallPost::WallPost();
WallPost::WallPost(message);
WallPost::~WallPost();

void WallPost::validateMessage();
void WallPost::makeMessage(message);
void WallPost::editMessage(message);
void WallPost::removeMessage(message);
   
