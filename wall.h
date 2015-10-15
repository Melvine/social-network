#ifndef WALL_H
#define WALL_H
#include <string>
#include "DlinkedList.h"

using namespace std;

class WallPost {
    public:
        WallPost();
        WallPost(string);
        WallPost(string, string);
        
        void editMessage(string);
        void removeMessage(string);
		string getUsername();
        
        
    private:
        string message;
        time_t timestamp;
        string username;      
};  

class Wall {
    public:
      Wall(WallPost);
      ~Wall();
      void add(WallPost);
      void remove(WallPost); 
      string getWallList();    
    private:
      DoublyLinkedList<WallPost> wallList;
};

#endif