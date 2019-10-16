// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int value;
	struct node *left;
	struct node *right;

}BiTNode, *BiTree;

bool  CreateTree(node *T){
	//按先序序列输入二叉树中的节点值,空格代表空字符 
	char ch; //接收输入的字符
	cout << "please enter" << endl;
	cin >> ch;
	if (ch == '0')  T = nullptr;
	else
	{
		T = new node();
		T->value = ch;
		CreateTree(T->left); //构造左子树
		CreateTree(T->right);//构造右子树 
	}
	return true;
}

int main()
{
	node *T=nullptr;
	CreateTree(T);
	cout << "finish!" << endl << endl << endl;
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
