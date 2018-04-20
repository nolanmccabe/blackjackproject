// JackBanner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void SIMPLE()
{
	cout << "#####" << "  " << "#####" << "  " << "#     #" << "  " << "#####" << "  " << "#    " << "  " << "#####" << endl;
	cout << "#    " << "  " << "  #  " << "  " << "##  ## " << "  " << "#   #" << "  " << "#    " << "  " << "#    " << endl;
	cout << "#####" << "  " << "  #  " << "  " << "#  #  #" << "  " << "#####" << "  " << "#    " << "  " << "#####" << endl;
	cout << "    #" << "  " << "  #  " << "  " << "#     #" << "  " << "#    " << "  " << "#    " << "  " << "#    " << endl;
	cout << "#####" << "  " << "#####" << "  " << "#     #" << "  " << "#    " << "  " << "#####" << "  " << "#####" << endl;
}

void JACK()
{
	cout << "#####" << "  " << "  #  " << "  " << "#####" << "  " << "#    #" << endl;
	cout << "  #  " << "  " << " # # " << "  " << "#   #" << "  " << "#  # " << endl;
	cout << "  #  " << "  " << "#####" << "  " << "#    " << "  " << "##    " << endl;
	cout << "# #  " << "  " << "#   #" << "  " << "#   #" << "  " << "#  # " << endl;
	cout << "###  " << "  " << "#   #" << "  " << "#####" << "  " << "#    #" << endl;
}

int main()
{
	
	SIMPLE();
	cout << "\n";
	JACK();
	cout << "\n";
	cout << "CREATED BY:\n";
	cout << "\n";
	cout << "OVERWORKED & UNDERPAID (Copyright 2018)\n";
	cout << "\n";
	cout << "Danna Gozos\n";
	cout << "Nolan McCabe\n";
	cout << "Byron Ford\n";
	cout << "Marco Rosales\n";
	cout << "\n";
	system("PAUSE");
}
