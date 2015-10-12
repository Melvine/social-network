#include "user.h"
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include <iostream>
#include <string>

using namespace std;


UserNetwork::UserNetwork(User user){
    DoublyLinkedList<User> userList (user);

}

UserNetwork::~UserNetwork(){
    userList.~DoublyLinkedList();
}


void UserNetwork::add(User user){
    userList.add(user);

}


void UserNetwork::remove(User user){
    //userList.remove(user);
}


string UserNetwork::getUserList(){
    string result = "test message";
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

// void User::removeWallPost(Wall _wallPost){
//     delete _wallPost;

// }

string User::displayInfo(){
    return username;
}


