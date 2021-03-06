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
    string getWall();


    int getId();

    void createWallPost(string);


  private:
    string username;
    string name;
    string password;
    string phoneNumber;
    Wall wall;
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

<<<<<<< HEAD
        void writeNetwork(const char*);
        void readNetwork(const char*);
=======
        void writeNetwork(char *);
        void readNetwork(const char *);
>>>>>>> de3fc3e3a48de67685e198316bcda09c92f5c1c5
        User* login(string, string);
        int validateUser(string);

        string getUserList();



    private:
        DoublyLinkedList<User> userList;
};


#endif
