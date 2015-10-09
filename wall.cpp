#include "wall.h"
#include "DLinkedList.h"
#include <string>
#include <time.h>  

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
void Wall::add(WallPost wallpost){
  wallList.add(wallpost);
}
void Wall::remove(WallPost wallpost){
  wallList.remove(wallpost);
}
string Wall::getWallList(){
  string result = "";
  //incomplete
}    


WallPost::WallPost(){
  message = "";
  author = "";
  time{&timer};
}
WallPost::WallPost(message){
  message = message;
  author = "";
  time{&timer};
}

//void WallPost::validateMessage(){}
void WallPost::editMessage(message){}
void WallPost::removeMessage(message){}
   
