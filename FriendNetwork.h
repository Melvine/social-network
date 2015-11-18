#ifndef FRIENDNETWORK_H
#define FRIENDNETWORK_H
#include <string>


using namespace std;

class FriendNetwork{
    public:
        int addFriend(User, User);
        int deleteFriend(User, User);
        int acceptRequest(User, User);
        int rejectRequest(User, User);
        string pendingRequests(User);
        string friendList(User);
        int postToFriend(User, User, string);
        string viewFriendPosts(User);
        string searchFriend(string);


};

















#endif // FRIENDNETWORK_H
