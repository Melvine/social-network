#include <iostream>
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include "user.h"
#include <string>

using namespace std;

int main(){
	//User user_one("Melvine", "Melvin", "mypassword123");
	//WallPost wall_post("I like pizza");
	//cout << user_one.displayInfo() << endl;
	UserNetwork facebook;
	//facebook.add(user_one);
	//Wall waller(wall_post);
	//cout << "\n" << facebook.getUserList() << endl;
	facebook.readNetwork("infile.txt");
	//cout << "\n" << facebook.getUserList() << endl;
	//cout << facebook.getUserList();
}
