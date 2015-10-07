class Wall {
    public:
      Wall();
      ~Wall();
      void add(WallPost);
      void remove(WallPost); 
      getWallList();    
    private:
      Vector <WallPost> WallList;
 
        
};
        