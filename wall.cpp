#include "wall.h"
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include <string>
#include <time.h>

using namespace std;

Wall::Wall(){
  DoublyLinkedList<WallPost> wallList;
}
Wall::Wall(WallPost wallpost){
  DoublyLinkedList<WallPost> wallList(wallpost);
}
Wall::~Wall(){
  wallList.~DoublyLinkedList();
}
void Wall::add(WallPost wallpost){
  wallList.add(wallpost);
}
void Wall::remove(int _id){
  wallList.remove(_id);
}
string Wall::getWallList(){
    string result = "";
    Node<WallPost> *temp = wallList.getRoot();

    if(temp == NULL){
      return "no wall posts \n";
    }
    while (temp != NULL){
      
      result = result + to_string(temp->data.getId()) + ": " + (temp->data.getMessage()) + "\n" ;
      temp = temp->next;
    }
    
    return result;
}

WallPost::WallPost(){
  message = "";
  username = "";
  timestamp = time(NULL); //set current time
}
WallPost::WallPost(string _message){
  message = _message;
  username = "";
  timestamp = time(NULL); //set current time
}
WallPost::WallPost(string _message, string _name){
  message = _message;
  username = _name;
  timestamp = time(NULL); //set current time
}
void WallPost::editMessage(string _message){
  message = _message;
}
void WallPost::setId(int _id){
  id = _id;
}
string WallPost::getUsername(){
  return username;
}
string WallPost::getMessage(){
  return message;
}
string WallPost::getWallPost(){
  string result = "Message: " + message + "\n" + "Author: " + username + "\n" + "Timestamp: " + "missing time" + "\n";
  return message;
}
int WallPost::getId(){
  return id;
}
