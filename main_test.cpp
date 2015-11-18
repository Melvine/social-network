#include <iostream>
#include "wall.h"
#include "user.h"
#include "list.h"
#include "list.cpp"
#include <string>
#include <algorithm>

using namespace std;

int main(){
	// /*
	// *
	// *
	// cin cout program code
	// *
	// *
	// */
	//DEBUGGER PART 2
  
	User x("mel","pass","hi");
	User y("mely","pass","hi");
	User z("melz","pass","hi");
	User a("mela","pass","hi");


	LinkedList<User> *userList = new LinkedList<User>;
	// userList->set(0,x);
	// userList->set(1,y);
	// userList->set(2,z);
	// userList->set(3,a);

	// List<User> *userList = new Array<User>;
	userList->insert(0, x);
	userList->insert(0, y);
	//userList->insert(0, z);

	// userList->insert(0, x);
	// userList->insert(0, y);
	// userList->insert(0, z);

	// userList->insert(0, x);
	// userList->insert(3, y);
	// userList->insert(0, z);

	// userList->insert(0, a);
	// int size = 2;
	// for(int i =0; i < size; i++){
	// 	cout << i << (userList->get(i)).getUsername() << endl;
	// }
	// cout << endl;
	// userList->remove(0);

	// UserNetwork network;
	// network.readNetwork("infile.txt");
	// network.insert(y);
	// network.remove(1);
	
	// userList.insert(0,x);
	// userList.insert(1,y);
	// userList.insert(1,y);
	// userList.insert(0,y);
	//userList.remove(2);

	//cout << x.getUsername() << endl;
	//cout << network.getUserList();
	// for(int i =0; i < size; i++)
	// 	cout << i << (userList->get(i)).getUsername() << endl;
	string word = "Hello";
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	cout << word;
}