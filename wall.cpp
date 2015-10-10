#include "wall.h"
#include "DLinkedList.h"
#include <string>
#include <time.h>  

using namespace std;

Wall::Wall(WallPost wallpost){
  DoublyLinkedList<WallPost> wallList(wallpost);
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
  string result = message; //test using message variable
  //incomplete
  return result
}

WallPost::WallPost(){
  message = "";
  author = "";
  timer = time{NULL};
}

WallPost::WallPost(message){
  this.message = message;
  author = "";
  timer = time{NULL};
}

//void WallPost::validateMessage(){}
void WallPost::editMessage(message){}
void WallPost::removeMessage(message){}
   
