all:
	g++ list.cpp wall.cpp user.cpp main.cpp -o social-network
test:
	g++ list.cpp wall.cpp user.cpp main_test.cpp -o debugger-social
