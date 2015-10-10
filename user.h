#ifndef USER_H
#define USER_H
#include <string>
#include "wall.h"
#include "DlinkedList.h"

using namespace std;

class User {
  public:
    User ();
    ~User ();
    //User (string, string);

    void editUserName(string);
    void editName(string);
    void editPassword(string);
  //  void removeWallPost(WallPost);
    void editPhoneNumber(string);
    string displayInfo();


  private:
    Wall userWall;
    string username;
    string name;
    string password;
    string phoneNumber;
};

class UserNetwork {
    public:
        UserNetwork(User);
        ~UserNetwork();

        void validateUser();
        void addUser(User);
        void removeUser(User);
        string getUserList();

    private:
        DoublyLinkedList <UserNetwork> userList;
};


#endif
