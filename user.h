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
    void setId(int);

    string displayInfo();
    string getUsername() const;
    string getName();
    string getPassword();
    string getPhoneNumber();
    string getWall();
    //UserFriends getUserFriends();


    int getId();

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
    int id;
};

class UserNetwork {
    public:
        UserNetwork();
        UserNetwork(User);
        ~UserNetwork();

        // void validateUser();
        void insert(User);
        void remove(int);
        void removeUser(User);
        string searchUser(string);
        void writeNetwork(char *);
        void readNetwork(const char *);
        User* login(string, string);
        int validateUser(string);

        string getUserList();



    private:
        LinkedList<User> *userList;
};


#endif
