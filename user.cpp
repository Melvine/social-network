#include "user.h"
#include <iostream>
#include <string>

using namespace std;


UserNetwork::UserNetwork(User user){
    DoublyLinkedList<User> userNetwork (user);

}

UserNetwork:~UserNetwork(){
    userNetwork.~DoublyLinkedList();
}


void UserNetwork::add(User user){
    userNetwork.add(user);

}


void UserNetwork::remove(User user){
    userNetwork.remove(user);
}


string UserNetwork:getUserList(){
    string result = "test message";
    return result;
}


void User::User (string _name, string _username, string _password, string _phoneNumber){
    name = _name;
    username = _username;
    password = _password;
    phoneNumber = _phoneNumber;
}

User::User(){
    name = "";
    username = "";
    password = "";

}

~User::User(){
    name = "";
    username = "";
    password = "";

}

void User::editName(string name_){
    name = _name;

}

void User::editUserName(string username_){
    username = username_;

}

void User::editPassword(string _password){
    password = _password;

}

void User::editPhoneNumber(string _phoneNumber){
    phoneNumber = _phoneNumber;

}

void User::removeWallPost(Wall _wallPost){
    delete _wallPost;

}

string displayInfo(User user){
    cout << "UserName:" << username << "\n" << "Name:" << name << "\n" << "Password:" << password << "\n" << "Phone Number:" << phoneNumber;

}


void UserNetwork::addUser(User user){
    userList.add(user);

}


void UserNetwork::removeUser(User user){
    userList.remove(user);

}

