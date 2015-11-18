#ifndef USER_H
#define USER_H
#include <string>
#include "wall.h"
#include "list.h"
#include <fstream>
#include <vector>


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
    void editPhoneNumber(string);

    string displayInfo();
    string getUsername() const;
    string getName();
    string getPassword();
    string getPhoneNumber();
    string getWall();
    //UserFriends getUserFriends();


    void createWallPost(string);
    void removeWallPost(int);


  private:
    string username;
    string name;
    string password;
    string phoneNumber;
    //Wall wall;
    //UserFriends friends;
    //DoublyLinkedList<User> friendList;
    //vector<int> friendRequest;
};

class UserNetwork {
    public:
        UserNetwork();
        UserNetwork(User);
        ~UserNetwork();

        // void validateUser();
        void insert(User);
        void remove(int);
        // string searchUser(string);
        // void writeNetwork(char *);
        void readNetwork(const char *);
        User* login(string, string);
        int validateUser(string);

        string getUserList();



    private:
        Array<User> userList;
};


#endif
