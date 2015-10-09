#ifndef WALL_H
#define WALL_H

class Wall {
    public:
      Wall();
      ~Wall();
      void add(WallPost);
      void remove(WallPost); 
      getWallList();    
    private:
      DoublyLinkedList <WallPost> wallList;
};
        
class WallPost {
    public:
        WallPost(message);
        WallPost();
        ~WallPost();
        
        void validateMessage();
        void makeMessage(message);
        void editMessage(message);
        void removeMessage(message);
        
        
    private:
        string message;
        time_t timer;
        string author;      
};  

#endif