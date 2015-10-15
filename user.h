#ifndef USER_H
#define USER_H
#include <string>
#include "wall.h"
#include "DlinkedList.h"

using namespace std;

class User {
  public:
    User ();
    User (string, string, string);

    void editUserName(string);
    void editName(string);
    void editPassword(string);
  //  void removeWallPost(WallPost);
    void editPhoneNumber(string);
    string displayInfo();
    string getUsername();
    string getName();

  private:
    string username;
    string name;
    string password;
    string phoneNumber;
};

class UserNetwork {
    public:
        UserNetwork();
        UserNetwork(User);
        ~UserNetwork();

       // void validateUser();
        void add(User);
        void remove(User);
        string getUserList();

    //private:
        DoublyLinkedList<User> userList;
};


#endif
