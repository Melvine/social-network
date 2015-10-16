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
        void writeNetwork(char*);
        void readNetwork(char*);
        User login(string, string);
=======
        void writeNetwork(char *);
        void readNetwork(char*);
        User* login(string, string);
>>>>>>> c4766492f6b76b17219e40f31d212d0756438935

        string getUserList();



    private:
        DoublyLinkedList<User> userList;
};


#endif
