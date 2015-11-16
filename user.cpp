#include "user.h"
#include "list.h"
#include "list.cpp"
#include "wall.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

UserNetwork::UserNetwork(){
  userList = new LinkedList<User>;
}

UserNetwork::UserNetwork(User user){
  userList = new LinkedList<User>;
  userList->insert(0,user);
}

UserNetwork::~UserNetwork(){
  userList->~LinkedList();
}

void UserNetwork::insert(User user){
    userList->insert(0,user);
}

void UserNetwork::remove(int _id){
    //userList.remove(_id);
}

void UserNetwork::removeUser(User _id){
    // Node<User> *p = userList.getRoot();
    // while(p!= NULL){
    //   if(p->data.getUsername() == _id.getUsername()){
    //     p->data.editUserName("");
    //     delete p;
    //     return;
    //   }
    //   p = p->next;
    // }
}
// id
void UserNetwork::writeNetwork(char* file){
  ofstream myfile;
  myfile.open(file);

  Node<User> *temp = userList->getRoot();
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
            insert(new_user);
        }
      }
    }
}

User* UserNetwork::login(string _username, string _password){
    Node <User> *temp = userList->getRoot();
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
    Node <User> *temp = userList->getRoot();
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

string UserNetwork::getUserList(){
  string result = "";
  Node<User> *temp = userList->getRoot();

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

void User::setId(int _id){
  id = _id;
}

// void User::requestFriend(Node* root, string _name){
//   if(root != NULL){
//     return;
//   }
//   Node* tmp = root;
//   while(tmp != NULL){
//     if(_name == tmp->data.getUsername()){
//       friendList.insert(tmp);
//       friendRequest.insert(0);
//     }
//     tmp = tmp->next;
//   }
// }

// void User::insertFriend(Node* root, string _name){
//   //in developement 
//   if(root != NULL){
//     return;
//   }

// }

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
  //return wall.getWallList();
  return "";
}
int User::getId(){
    return id;
}

// UserFriends User::getUserFriends(){
//   return friends;
// }

string User::displayInfo(){
  string info = "Username: " + username +"\n" + "Name: " + name + "\n" + "Password: " + password + "\n" + "Phonenumber: "+ phoneNumber;
  return info;
}
