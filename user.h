class User {
  public:
    User ();
    ~User ();
    User (username, password); 
    
    void editUserName(username);
    void editName(name);
    void editPassword(password);
    void removeWallPost(WallPost);
    String displayInfo();
    
    importUser();
  
  private:
    Wall userWall;
    String username;
    String name;
    String password;
    
}