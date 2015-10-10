#include <iostream>
#include "DlinkedList.h"
#include "wall.h"
#include "user.h"
#include <string>

using namespace std

int main(){
	Wall test("hi this is a string");
	cout << test.getWallList() << endl;
}