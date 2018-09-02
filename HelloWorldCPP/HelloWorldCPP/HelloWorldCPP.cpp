// HelloWorldCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>

// sample struct
struct HelloWorldVO {
	std::string name;
	std::string greeting;
};

int main()
{
	HelloWorldVO helloWorldVOs[2];
	
	HelloWorldVO helloWorldVO1;
	helloWorldVO1.name = "Jessica";
	helloWorldVO1.greeting = "howdy!";

	HelloWorldVO helloWorldVO2;
	helloWorldVO2.name = "Jessica";
	helloWorldVO2.greeting = "hello!";

	helloWorldVOs[0] = helloWorldVO1;
	helloWorldVOs[1] = helloWorldVO2;

	for (int i = 0; i < 2; i++) {
		std::cout << helloWorldVOs[i].name + " says " + helloWorldVOs[i].greeting << std::endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
