#include "user.h"
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <sstream>


using namespace std;
UserNetwork::UserNetwork(){
    DoublyLinkedList<User> userList;

}

UserNetwork::UserNetwork(User user){
  DoublyLinkedList<User> userList(user);

}

UserNetwork::~UserNetwork(){
  //userList.~DoublyLinkedList();
}


void UserNetwork::add(User user){
    userList.add(user);
}


void UserNetwork::remove(int _id){
    userList.remove(_id);
}



string UserNetwork::getUserList(){
    string result = "";
    Node<User> *temp = userList.getRoot();

    if(temp == NULL){
      return "no user root \n";
    }
    while (temp != NULL){
      result = result + (temp->data.getUsername()) + "\n" ;
      temp = temp->next;
    }

    return result;
}


User::User (string _username, string _password, string _name, string _phoneNumber){
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
User::User(string _username,string _password,string _name){
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

void User::createWallPost(string _post){
    WallPost newPost(_post, username);
    wall.add(newPost);
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

string User::getPassword(){
  return password;
}

string User::getPhoneNumber(){
  return phoneNumber;
}

string User::getWall(){
  return wall.getWallList();
}

string User::displayInfo(){
    string info = "Username: " + username +"\n" + "Name: " + name + "\n" + "Password: " + password + "\n" + "Phonenumber: "+ phoneNumber;
    return info;
}

// id
void UserNetwork::writeNetwork(const char* file){
	ofstream myfile;
	myfile.open(file);

	Node<User> *temp = userList.getRoot();
	if(myfile.is_open()){
		while(temp != NULL){
			myfile << temp->data.displayInfo();
			cout << temp->data.displayInfo();
			temp = temp->next;
		}

		myfile.close();
	}
	else{
		cout << "Unable to open the file" << endl;
	}
}



<<<<<<< HEAD
void UserNetwork::readNetwork(const char*  user_file){
=======
void UserNetwork::readNetwork(const char* user_file){

>>>>>>> de3fc3e3a48de67685e198316bcda09c92f5c1c5
    ifstream myfile(user_file);
    string read, inData, line, s;
    string username, name, password, phoneNumber;

    int count = 0;
    while (getline(myfile, line).good()){
      stringstream iss;
      iss << line;

      while ( getline(iss, s, '|') ){
        switch (count){
          case 0:
              username = s;
              break;
          case 1:
              password = s;
              break;
          case 2:
              name = s;
              break;
          case 3:
              phoneNumber = s;
              break;
        }
        count++;


        if (count > 3){

            count = 0;
            User new_user (username, password, name, phoneNumber);
            add(new_user);
        }
      }
    }

}


int User::getId(){
    return id;
}

User* UserNetwork::login(string _username, string _password){
    Node <User> *temp = userList.getRoot();
    while (temp != NULL){
        if ((temp->data.getUsername() == _username ) && (temp->data.getPassword() == _password)){
            return &(temp->data);
        }
        else{
            temp = temp ->next;
        }
    }
    cout << "User does not exist or you have entered your username/password incorrectly \n";
    return NULL;
}

int UserNetwork::validateUser(string _username){
    Node <User> *temp = userList.getRoot();
    while (temp != NULL){
        if ((temp->data.getUsername() == _username )){
            return 0;
        }
        else {
            temp = temp -> next;
        }

    }
    return 1;
}


/*
void UserNetwork::readNetwork(char *file){
>>>>>>> b8947be49cb462fe0c968d67957c4ae4e08b2f38


}
*/
