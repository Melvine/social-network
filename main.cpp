#include <iostream>
#include "DlinkedList.h"
#include "DlinkedList.cpp"
#include "wall.h"
#include "user.h"
#include <string>

using namespace std;

int main(){
	User user_one("Melvine", "Melvin", "mypassword123");
	cout << user_one.displayInfo() << endl;
}