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
        ~WallPost();
        
        void validateMessage();
        void makeMessage(string);
        void editMessage(string);
        void removeMessage(string);
        
        
    private:
        string message;
        time_t timestamp;
        string author;      
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