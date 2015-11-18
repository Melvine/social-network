#ifndef WALL_H
#define WALL_H
#include <string>
#include "list.h"

using namespace std;

class WallPost {
    public:
        WallPost();
        WallPost(string);
        WallPost(string, string);
        
        void editMessage(string);
        void setId(int);
		string getUsername();
        string getMessage();
        string getWallPost();
        int getId();
    private:
        string message;
        time_t timestamp;
        string username;  
        int id;    
};  

class Wall {
    public:
      Wall();
      Wall(WallPost&);
      ~Wall();

      void insert(WallPost&);
      void remove(int); 

      string getWallList();    

    private:
      LinkedList<WallPost> wallList;
      int id;  
};

#endif