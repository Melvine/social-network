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
	//UserNetwork facebook;
	//facebook.add(user_one);
	//Wall waller(wall_post);

	/*
	*
	*
	cin cout program code
	*
	*
	*/



	UserNetwork facebook;
	facebook.readNetwork("infile.txt");
	int main_menu_option = 0;
	string name, username, password, phonenumber, post;
	User *current_user = NULL;


	//main menu of the social app
	cout << "Welcome the social network" << endl;

	while(main_menu_option == 0){
		//main menu
		cout << "please type in a number from these options" << endl;
		cout << "1. Login" << endl;
		cout << "2. Register Account" << endl;
		cout << "3. Quit" << endl;
		cin >> main_menu_option;
		if(!main_menu_option){
			cin.clear();
			cin.ignore();
		}
		if(main_menu_option == 0 || main_menu_option > 3 || main_menu_option < 0){
			cout << "please choose the following options" << endl;
			main_menu_option = 0;
		}
		if(main_menu_option == 1){
			//login
			cout << "Enter your username" << endl;
			cin >> username;
			cout << "Enter your password" << endl;
			cin >> password;
			current_user = (facebook.login(username, password));
			if(current_user == NULL){
				main_menu_option = 0;
			}
		}
		else if(main_menu_option == 2){
				//register
				cout << "Enter your username" << endl;
				cin >> username;
				cout << "Enter a password" << endl;
				cin >> password;
				cout << "Enter a name" << endl;	
				cin >> name;
				cout << "Enter your phone number" << endl;
				cin >> phonenumber;
				if(facebook.validateUser(username) == 1){
					User new_user(username, password, name, phonenumber);
					facebook.add(new_user);
					current_user = &new_user;				
					cout << "You have successfully created a user" << endl;	
					cout << "Logging into the new user account" << endl << endl;					
				}else{
					cout << "Duplicate username, failed to sign up" << endl << endl;
					main_menu_option = 0;
				}
			}
			else if(main_menu_option == 3){
				//exit(EXIT_SUCCESS);
				return 1;
				//quit
			}
	}

	//resets menu
	main_menu_option = 0;

	//for logged in users
	if(current_user != NULL){
		cout << "You have logged in, " << current_user->getName() << endl;

		while(main_menu_option == 0){
			cout << "Chose an option" << endl;
			cout << "1. Display my wall" << endl;
			cout << "2. Add post" << endl;
			cout << "3. Quit" << endl;
			cin >> main_menu_option;

			if(!main_menu_option){
				cin.clear();
				cin.ignore();
			}

			if(main_menu_option == 0 || main_menu_option > 3 || main_menu_option < 0){
			cout << "please choose the following options" << endl << endl;
				main_menu_option = 0;
			}

			if(main_menu_option == 1){
				cout << current_user->getWall() << endl;
				main_menu_option = 0;
			}
			else if(main_menu_option == 2){
				cout << "write your post (press enter to submit): ";
				cin.ignore(); 
				getline(cin, post);

				cout << "preview" << post << endl;
				current_user->createWallPost(post);

				cout << "post added successfully" << endl;
				main_menu_option = 0;
			}
			else if(main_menu_option == 3){
				return 1;
			}
		}
	}


	//cout << "\n" << facebook.getUserList() << endl;
	//cout << "\n" << facebook.getUserList();
	//cout << facebook.getUserList();
}

