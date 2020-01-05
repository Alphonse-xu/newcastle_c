#include <iostream>
#include<algorithm>
using namespace std;

char myname[] = "owen xu";
char first[10];
char last[10];

void showname()
{
	for (auto& i : myname) {
		cout << i;
	}
}


float calc_avg(const int* arr, const int val) {
	int sum = 0;

	for (int i = 0; i < val; ++i)
		sum += arr[i];

	return (sum / (float)val);
}

float calc_avg(const int* arr, const int val);

int main(void) {

	showname();

	const int CONST_VALUE = 3;
	float ave;

	// stack based 1-d arrays
	int array_nums[CONST_VALUE] = { 2, 4, 5 };

	// print out the first element
	cout << "value at index 0 is " << array_nums[0] << "\n";

	//stack based 2-d arrays
	char naughts_n_xs[3][3];

	// set the middle square to x
	naughts_n_xs[1][1] = 'X';

	//arrays on the heap 1-d
	int* sum = new int[CONST_VALUE];

	for (int i = 0; i < CONST_VALUE; ++i)
	{
		cout << "enter a value...\n";
		cin >> sum[i];
	}

	ave = calc_avg(sum, CONST_VALUE);

	cout << "the average is " << ave << "\n";

	delete[] sum;

	return 0;
}

