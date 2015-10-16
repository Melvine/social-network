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
	string name, username, password, phonenumber;
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
		if(main_menu_option == 0 || main_menu_option > 3 || main_menu_option < 0){
			cout << "please choose the following options" << endl;
		}
	}
	if(main_menu_option == 1){
		//login
		cout << "Enter your username" << endl;
		cin >> username;
		cout << "Enter your password" << endl;
		cin >> password;
		current_user = (facebook.login(username, password));
	}
	else if(main_menu_option == 2){
		//register
		cout << "Enter your name" << endl;
		cin >> name;
		cout << "Enter a username" << endl;
		cin >> username;
		cout << "Enter a password" << endl;	
		cin >> password;
		cout << "Enter your phone number" << endl;
		cin >> phonenumber;
		cout << "You have successfully created a user" << endl;
		User new_user(username, password, name, phonenumber);
		facebook.add(new_user);
		current_user = &new_user;
		cout << "Logging into the new user account" << endl;
		main_menu_option = 0;
	}
	else if(main_menu_option == 3){
		exit(EXIT_SUCCESS);
		//quit
	}


	//for logged in users
	if(current_user != NULL){
		cout << "You have logged in, " << current_user->getName() << endl;
		while(main_menu_option == 0){
			cout << "Chose an option" << endl;
			cout << "1. Display my wall" << endl;
			cout << "2. Quit" << endl;
			cin >> main_menu_option;
			if(main_menu_option == 0 || main_menu_option > 2 || main_menu_option < 0){
			cout << "please choose the following options" << endl;
				main_menu_option = 0;
			}
			else{
				main_menu_option = 0;	
			}
		}
		if(main_menu_option == 1){
			cout << current_user->getWall() << endl; // not implemented
		}
		else if(main_menu_option == 2){
			exit(EXIT_SUCCESS);
		}
	}


	//cout << "\n" << facebook.getUserList() << endl;
	//cout << "\n" << facebook.getUserList();
	//cout << facebook.getUserList();
}

