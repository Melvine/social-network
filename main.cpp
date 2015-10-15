#include <iostream>
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include "user.h"
#include <string>

using namespace std;

int main(){
	User user_one("Melvine", "Melvin", "mypassword123");
	WallPost wall_post("message");
	//cout << user_one.displayInfo() << endl;
	UserNetwork facebook;
	facebook.add(user_one);
	//cout << facebook.userList.data.getUsername();
	//Wall waller(wall_post);
	cout << "\n" << facebook.getUserList() << endl;
}