// UOProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
/*
Displays a card visual.
*/
int main()
{
	string s1 = "|";
	string s2 = "              |\n";
	string s3 = " ______________\n";
	string s4 = "           |\n";
	string s5 = "|           ";
	string s6 = "  |\n";
	string s7 = "|______________|\n";

	cout << s3;
	cout << s1 << s2;
	cout << s1 << "  J" << s4;
	cout << s1 << s2;
	cout << s1 << s2;
	cout << s1 << s2;
	cout << s1 << s2;
	cout << s1 << s2;
	cout << s1 << s2;
	cout << s5 << "J" << s6;
	cout << s7;


	system("PAUSE"); 

	return 0;

}
