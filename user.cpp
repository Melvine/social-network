#include "user.h"
#include <iostream>
#include <string>


void User::User (string name_, string username_, string password_, string phoneNumber_){
    name = name_;
    username = username_;
    password = password_;
    phoneNumber = phoneNumber_;
}

void User::User(){
    name = NULL;
    username = NULL;
    password = NULL;

}

void User::editName(string name_){
    name = name_;

}

void User::editUserName(string username_){
    username = username_;

}

void User::editPassword(string password_){
    password = password_;

}

void User::editPhoneNumber(string phoneNumber_){
    phoneNumber = phoneNumber_;

}

void User::removeWallPost(Wall wallPost_){
    delete wallPost_;
    
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

