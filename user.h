class User {
  public:
    User ();
    ~User ();
    User (username, password);

    void editUserName(username);
    void editName(name);
    void editPassword(password);
    void removeWallPost(WallPost);
    void editPhoneNumber(phonenumber);
    string displayInfo();


    importUser();

  private:
    Wall userWall;
    string username;
    string name;
    string password;
    string phoneNumber;

}

class userNetwork {
    public:
        userNetwork();
        ~userNetwork();

        void validateUser();
        void addUser(User);
        void removeUser(User);
        getUserList();



    private:
        DoublyLinkedList <userNetwork> userList;
}
