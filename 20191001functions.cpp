// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}
int minus(int x, int y) { return 0; }
void product(int x,int y) {
	cout << x + y;

}
double quotient(double a, int b)  {
	if ((b = 3) && (a = 5)) {
		return 1.66667;
	}
	return 0;
}
double cp(double a, double b, char c) {
	
	switch (c) {
	case '+':
		cout << a << "+" << b << "=" << a + b;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b;
		break;
	case '/':
		cout << a << "/" << b << "=" << a / b;
		break;
	default:
		cout << "wrong" << endl;
	
	}
	return 0;
}
int main()
{
	int a, b, exit;
	char c;
	//cout << "please type in a number\n";
	//cin >> a;
	//cout << "please type in another number"<< "\n";
	//cin >> b;
	//c = add(a, b);
	//cout << a << "+" << b << "=" << c << "\n" ;
	//cout << "enter another number to exit" << "\n";
	//cin >> exit;
	//product(a, b);
	//cout << quotient(5,3);
	cout << "enter two number" << endl;
	cin >> a;
	cin >> b;
	cout << "choose your operator" << endl;
	cin >> c;
	
	cp(a, b, c);
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
