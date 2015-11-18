#include "user.h"
#include "list.h"
#include "list.cpp"
#include "wall.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

UserNetwork::UserNetwork(){
  
}

UserNetwork::UserNetwork(User user){
  userList.insert(0,user);
}

UserNetwork::~UserNetwork(){
 
}

void UserNetwork::insert(User user){
  userList.insert(userList.length(),user);  //insert at end of the list
}

void UserNetwork::remove(int pos){
  userList.remove(pos);
}
// // id
// void UserNetwork::writeNetwork(char* file){
//   ofstream myfile;
//   myfile.open(file);

//   Node<User> *temp = userList->getRoot();
//   if(myfile.is_open()){
//     while(temp != NULL){
//       myfile << temp->data.displayInfo();
//       cout << temp->data.displayInfo();
//       temp = temp->next;
//     }

//     myfile.close();
//   }
//   else{
//     cout << "Unable to open the file" << endl;
//   }
// }

void UserNetwork::readNetwork(const char* user_file){

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
            userList.insert(userList.length(),new_user);
        }
      }
    }
}

const User UserNetwork::login(string _username, string _password){
    for(int i = 0; i < userList.length(); i++){
      if(userList.get(i).getUsername() == _username && userList.get(i).getPassword() == _password){
        return userList.get(i);
      }
    }
    cout << "User does not exist or you have entered your username/password incorrectly \n";
}

// string UserNetwork::searchUser(string keyword){
//   Node <User> *root = userList->getRoot();
//   string result = "";
//   int i = 0;


//   while(root != NULL){
//     string user_name = root->data.getUsername();
//     if(strstr(user_name.c_str(), keyword.c_str()) != NULL){
//       result+= user_name + "\n";
//     }
//     root = root->next;
//   }
//   return result;
// }

 int UserNetwork::validateUser(string _username){
     for (int i = 0; i <userList.length(); i++){
       if (userList.get(i).getUsername() == _username){
	 return 0;
       }
     
     
     return 1;
     }
 }
/*
string UserNetwork::searchUser(string keyword){
   Node <User> *root = userList->getRoot();
   string result = "";
   int i = 0;


   while(root != NULL){
     string user_name = root->data.getUsername();
     if(strstr(user_name.c_str(), keyword.c_str()) != NULL){
       result+= user_name + "\n";
     }
     root = root->next;

     
   }
   return result;
 }
*/

string UserNetwork::getUserList() {
  string result = "";
  for(int i = 0; i < userList.length(); i++){
    result = result + userList.get(i).getUsername() + "\n";
  }
  return result;
}


User::User (string _username, string _password, string _name, string _phoneNumber){
  name = _name;
  int i = 0;  

  username = _username;
  password = _password;
  phoneNumber = _phoneNumber;
}

User::User(string _username, string _password){
  name = "";
  int i = 0;

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
  int i = 0;

  
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
  // WallPost newPost(_post, username);
  // wall.insert(newPost);
}

void User::removeWallPost(int index){
    // wall.remove(index);
}

string User::getUsername() const{
  return username;
}

string User::getName() const{
  return name;
}

string User::getPassword() const{
  return password;
}

string User::getPhoneNumber() const{
  return phoneNumber;
}

string User::getWall() const{
  //return wall.getWallList();
  return "";
}

string User::displayInfo() const{
  string info = "Username: " + username +"\n" + "Name: " + name + "\n" + "Password: " + password + "\n" + "Phonenumber: "+ phoneNumber;
  return info;
}
