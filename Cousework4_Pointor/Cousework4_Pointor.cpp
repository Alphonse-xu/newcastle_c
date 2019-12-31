// Cousework4_Pointor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Swap(int* a,int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int NUM1, NUM2;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* arrPoint = arr;
	for (int i =  0; i < 10; i++)
	{
		if ((*arrPoint) % 2 == 0)
		{
			std::cout << *arrPoint<<std::endl;
		}
		arrPoint +=1;
	}
	std::cin >> NUM1;
	std::cin >> NUM2;
	std::cout << "before swap" << NUM1 << NUM2 << std::endl;
	Swap(&NUM1, &NUM2);
	std::cout <<"after swap"<<NUM1<<NUM2<<std::endl;
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
