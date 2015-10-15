#include "wall.h"
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include <string>
#include <time.h>

using namespace std;

Wall::Wall(WallPost wallpost){
  DoublyLinkedList<WallPost> wallList(wallpost);
}
Wall::~Wall(){
  wallList.~DoublyLinkedList();
}
void Wall::add(WallPost wallpost){
  wallList.add(wallpost);
}
void Wall::remove(WallPost wallpost){
  wallList.remove(wallpost);
}
string Wall::getWallList(){
  string result = "message"; //test using message variable
  //incomplete
  return result;
}

WallPost::WallPost(){
  message = "";
  username = "";
  timestamp = time(NULL);
}

WallPost::WallPost(string message){
  message = message;
  username = "";
  timestamp = time(NULL);
}

WallPost::WallPost(string message, string name){
  message = message;
  username = name;
  timestamp = time(NULL);
}
//void WallPost::validateMessage(){}
void WallPost::editMessage(string message){
  return;
}
void WallPost::removeMessage(string message){
  return;
}
string WallPost::getUsername(){
  return username;
}

