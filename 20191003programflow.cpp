// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
 
int test(int a) {
	bool b;
	
	if (a >= 0)
	{
		b = 1;
		
	}
	else
	{
		b = 0;
		
	}
	return b;
}
int asking() {
	int b=0;
	
	while (b>= 0) {
		cout << "please enter a number";
		cin >> b;
	}
	return 0;
}
int main()
{
	int a;
	bool b = 0;
	cout << "please enter a int\n";
	cin >> a;
	b=test(a);
	if (b == true)
	{
		cout << "true";
		asking();
	}
	else
		cout << "false";
	return 0;
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
