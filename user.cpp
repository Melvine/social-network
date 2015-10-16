#include "user.h"
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include <iostream>
#include <string>

using namespace std;
UserNetwork::UserNetwork(){
    DoublyLinkedList<User> userList;

}

UserNetwork::UserNetwork(User user){
    DoublyLinkedList<User> userList(user);

}

UserNetwork::~UserNetwork(){
    userList.~DoublyLinkedList();
}


void UserNetwork::add(User user){
    cout << user.getUsername() << "this is in add";
    userList.add(user);
}


void UserNetwork::remove(int _id){
    userList.remove(_id);
}


string UserNetwork::getUserList(){
    string result = "";
    Node<User> *temp = userList.getRoot();

    if(temp == NULL){
      return "no root";
    }
    while (temp != NULL){
      result = result + (temp->data.getUsername()) + "\n" ;
      temp = temp->next;
    }
    
    return result;
}


/*void User::User (string _name, string _username, string _password, string _phoneNumber){
    name = _name;
    username = _username;
    password = _password;
    phoneNumber = _phoneNumber;
}

*/

User::User(){
    name = "";
    username = "";
    password = "";
    phoneNumber = "";
}
User::User(string _username,string _name,string _password){
    name = _name;
    username = _username;
    password = _password;
    phoneNumber = "";
}

void User::editName(string _name){
    name = _name;

}

void User::editUserName(string _username){
    username = _username;

}

void User::editPassword(string _password){
    password = _password;

}

void User::editPhoneNumber(string _phoneNumber){
    phoneNumber = _phoneNumber;

}
void User::setId(int _id){
  id = _id;
}
// void User::removeWallPost(Wall _wallPost){
//     delete _wallPost;

// }
string User::getUsername(){
  return username;
}
string User::getName(){
  return name;
}
string User::displayInfo(){
    return username;
}
int User::getId(){
    return id;
}

