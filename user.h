#ifndef USER_H
#define USER_H
#include <string>
#include "wall.h"
#include "DlinkedList.h"
#include <fstream>

using namespace std;

class User {
  public:
    User ();
    User (string, string, string);
    User (string, string);
    User (string, string, string, string);

    void editUserName(string);
    void editName(string);
    void editPassword(string);
  //  void removeWallPost(WallPost);
    void editPhoneNumber(string);
    void setId(int);

    string displayInfo();
    string getUsername();
    string getName();
    string getPassword();
    string getPhoneNumber();
    int getId();

    void createWallPost(string);


  private:
    string username;
    string name;
    string password;
    string phoneNumber;
    DoublyLinkedList<WallPost> wall;
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
        void writeNetwork(string);
        void readNetwork(string);
        User login(string, string);

        string getUserList();



    private:
        DoublyLinkedList<User> userList;
};


#endif
