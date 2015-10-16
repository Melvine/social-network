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


void UserNetwork::remove(User user){
    userList.remove(user);
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


void User::User (string _name, string _username, string _password, string _phoneNumber){
    name = _name;
    username = _username;
    password = _password;
    phoneNumber = _phoneNumber;
}

User::User(string _username, string _password){
    name = "";
    username = _username;
    password = _password;
    phoneNumber = "";
}

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

void User::createWallPost(string _post){
    WallPost newPost = WallPost(_post, username);
    wall.add(newPost);


}


// void User::removeWallPost(Wall _wallPost){
//     delete _wallPost;

// }

void User::createWall(WallPost wallpost){
    DoublyLinkedList <WallPost> wallpost;
}

string User::getUsername(){
  return username;
}

string User::getName(){
  return name;
}

string User::getPassword(){
  return password;
}

string User::getPhoneNumber(){
  return phoneNumber;
}


string User::displayInfo(){
    string info = "Username: " + username +"\n" + "Name: " + name + "\n" + "Password: " + password + "\n" + "Phonenumber: "+ phoneNumber;
    return info;
}


void UserNetwork::writeNetwork(char* file){
	ofstream myfile;
	myfile.open(filename);

	Node<User> *temp = userNetwork->getRoot();
	if(myfile.is_open()){
		while(temp != NULL){
			myfile << temp->getData().displayInfo();
			cout << temp->getData().displayInfo();
			temp = temp->getNext();
		}

		myfile.close();
	}
	else{
		cout << "Unable to open the file" << endl;
	}
}

/*
void UserNetwork::readNetwork(char *file){


}
*/
