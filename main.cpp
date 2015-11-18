#include <iostream>
#include "wall.h"
#include "user.h"
#include "list.h"
#include "list.cpp"
#include <string>

using namespace std;

int main(){
	// /*
	// *
	// *
	// cin cout program code
	// *
	// *
	// */



	// UserNetwork facebookc;
	// facebook.readNetwork("infile.txt");
	// int running, main_menu_option = 0;
	// string name, username, password, phonenumber, post;
	// User *current_user = NULL;


	// //main menu of the social app
	// cout << "Welcome the social network" << endl;

	// while(running == 0){
	// 	while(main_menu_option == 0){
	// 		//main menu
	// 		cout << "please type in a number from these options" << endl;
	// 		cout << "1. Login" << endl;
	// 		cout << "2. Register Account" << endl;
	// 		cout << "3. Quit" << endl;
	// 		cin >> main_menu_option;
	// 		cin.ignore(1,'\n');
	// 		if(!main_menu_option){
	// 			cin.clear();
	// 			cin.ignore();
	// 		}
	// 		if(main_menu_option == 0 || main_menu_option > 3 || main_menu_option < 0){
	// 			cout << "please choose the following options" << endl;
	// 			main_menu_option = 0;
	// 		}
	// 		if(main_menu_option == 1){
	// 			//login
	// 			cout << "Enter your username" << endl;
	// 			getline(cin, username);
	// 			cout << "Enter your password" << endl;
	// 			getline(cin, password);
	// 			current_user = (facebook.login(username, password));
	// 			if(current_user == NULL){
	// 				main_menu_option = 0;
	// 			}
	// 		}
	// 		else if(main_menu_option == 2){
	// 				//register
	// 				cout << "Enter your username: ";
	// 				getline(cin, username);
	// 				cout << "Enter a password: ";
	// 				getline(cin, password);
	// 				cout << "Enter a name: ";	
	// 				getline(cin, name);
	// 				cout << "Enter your phone number: ";
	// 				getline(cin, phonenumber);
	// 				if(facebook.validateUser(username) == 1){
	// 					User new_user(username, password, name, phonenumber);
	// 					facebook.add(new_user);
	// 					current_user = &new_user;				
	// 					cout << "You have successfully created a user" << endl;	
	// 					cout << "Logging into the new user account" << endl << endl;					
	// 				}else{
	// 					cout << "Duplicate username, failed to sign up" << endl << endl;
	// 					main_menu_option = 0;
	// 				}
	// 			}
	// 			else if(main_menu_option == 3){
	// 				//exit(EXIT_SUCCESS);
	// 				return 1;
	// 				//quit
	// 			}
	// 	}

	// 	//resets menu
	// 	main_menu_option = 0;

	// 	//for logged in users
	// 	if(current_user != NULL){
	// 		cout << "You have logged in, " << current_user->getName() << endl;

	// 		while(main_menu_option == 0){
	// 			if(current_user == NULL)
	// 				break;

	// 			cout << "Chose an option" << endl;
	// 			cout << "1. Display my wall" << endl;
	// 			cout << "2. Add post" << endl;
	// 			cout << "3. Remove post" << endl;
	// 			cout << "4. search a user" << endl;
	// 			cout << "5. Delete your account" << endl;
	// 			cout << "6. Show friend list" << endl;
	// 			cout << "7. Show friend requests" << endl;
	// 			cout << "8. Logout" << endl;
	// 			cout << "9. Quit" << endl;
	// 			cin >> main_menu_option;

	// 			if(!main_menu_option){
	// 				cin.clear();
	// 				cin.ignore();
	// 			}

	// 			if(main_menu_option == 0 || main_menu_option > 9 || main_menu_option < 0){
	// 			cout << "please choose the following options" << endl << endl;
	// 				main_menu_option = 0;
	// 			}

	// 			if(main_menu_option == 1){
	// 				cout << endl << "Your wall: " << endl;	
	// 				cout << current_user->getWall() << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 2){
	// 				cout << "write your post (press enter to submit): ";
	// 				cin.ignore(); 
	// 				getline(cin, post);

	// 				current_user->createWallPost(post);

	// 				cout << "post added successfully" << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 3){
	// 				int index;
	// 				cout << "enter post id to delete (press enter to submit): ";
	// 				cin.ignore(); 
	// 				cin >> index;

	// 				current_user->removeWallPost(index);

	// 				cout << "post delete successfully" << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 4){
	// 				cout << "search by username or keywords: ";
	// 				cin.ignore(); 
	// 				getline(cin, post);
	// 				cout << facebook.searchUser(post) << endl;

	// 				cout << "end of search." << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 5){
	// 				//in development
	// 				cout << "Are you sure you want to delete your account?: 1 for yes or 2 for no";
	// 				cin >> main_menu_option;

	// 				if(!main_menu_option){
	// 					cout << "Error wrong input: returning back to the main menu";
	// 				}
	// 				else if (main_menu_option == 1){
	// 					facebook.removeUser(*current_user);
	// 					cout << "Your account is deleted successfully" << endl;
	// 					current_user = NULL;
	// 					break;
	// 				}
	// 				else if (main_menu_option == 2){
	// 					cout << "cancelled action" << endl;
	// 					main_menu_option = 0;
	// 				}				

	// 			}
	// 			else if(main_menu_option == 6){
	// 				cout << "friends list: \n" << "none" << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 7){
	// 				cout << "friend request: \n" << "no friend request at this time" << endl;
	// 				main_menu_option = 0;
	// 			}
	// 			else if(main_menu_option == 8){
	// 				cout << "logged out successfully" << endl;
	// 				main_menu_option = 0;
	// 				current_user = NULL;
	// 				break; //exits this while loop
	// 			}
	// 			else if(main_menu_option == 9){
	// 				facebook.~UserNetwork();
	// 				return 1;
	// 			}
	// 		}
	// 	}
	// }

	User x("mel","pass","hi");
	User y("mely","pass","hi");
	User z("melz","pass","hi");
	User a("mela","pass","hi");
	// List<User> *userList = new LinkedList<User>;
	// userList->set(0,x);
	// userList->set(1,y);
	// userList->set(2,z);
	// userList->set(3,a);

	// List<User> *userList = new Array<User>;
	// userList->insert(0, x);
	// userList->insert(0, y);
	// userList->insert(0, z);

	// userList->insert(0, x);
	// userList->insert(0, y);
	// userList->insert(0, z);

	// userList->insert(0, x);
	// userList->insert(3, y);
	// userList->insert(0, z);

	// userList->insert(0, a);
	//userList->remove(0);
	UserNetwork network;
	// network.readNetwork("infile.txt");
	network.insert(y);
	network.remove(1);

	// userList.insert(0,x);
	// userList.insert(1,y);
	// userList.insert(1,y);
	// userList.insert(0,y);
	//userList.remove(2);

	//cout << x.getUsername() << endl;
	int size = 9;
	cout << network.getUserList();
	// for(int i =0; i < size; i++)
	// 	cout << (userList->get(i)).getUsername() << endl;














}


