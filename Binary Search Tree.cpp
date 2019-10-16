// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
struct node {
	int value = 0;
	struct node* left = nullptr;
	struct node* right = nullptr;
};
struct node* root = nullptr; //创建根节点指针
//插入
void insert_integer(struct node** treelocation, int value) {
	//节点指针为空创建节点
	if (!*treelocation)
	{
		*treelocation = new node();
		(*treelocation)->value = value;
	}
	//创建左右子节点
	else if ((*treelocation)->value > value)
	{
		insert_integer(&(*treelocation)->right, value);
	}
	else
	{
		insert_integer(&(*treelocation)->left, value);
	}

};
//打印树（前序遍历）
void print_tree(struct node* tree) {
	
	if (tree) {
		cout << tree->value;
		print_tree(tree->left);
		print_tree(tree->right);
	}
	
};
//删除树（递归删除堆空间）
void terminate_tree(struct node* tree) {
	if (tree)
	{
		terminate_tree(tree->left);
		terminate_tree(tree->right);
		cout << "delete node"<<tree->value<<endl;
		delete tree;
		
	}
	
};

int main()
{

	int treeinput[5] = { 5,6,3,8,1 };
	node** treelocation = &root; //创建指向根节点的指针

	for (int i = 0; i < sizeof(treeinput) / sizeof(int); i++)
	{
		insert_integer(treelocation, treeinput[i]); //创建树
	}

	cout << "first print" << endl;
	print_tree(root);
	cout << endl;

	terminate_tree(root);
	root = nullptr; //重置根节点指针
	cout << root<<endl;
	
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
