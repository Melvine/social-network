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
    void setId(int);
    string displayInfo();
    string getUsername();
    string getName();
    int getId();

  private:
    string username;
    string name;
    string password;
    string phoneNumber;
    int id; 
};

class UserNetwork {
    public:
        UserNetwork();
        UserNetwork(User);
        ~UserNetwork();

        // void validateUser();
        void add(User);
        void remove(int);
        string getUserList();

    private:
        DoublyLinkedList<User> userList;
};


#endif
