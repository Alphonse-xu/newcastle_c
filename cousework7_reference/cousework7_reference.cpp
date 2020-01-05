#include <iostream>
#include <algorithm>
using namespace std;

void swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_ref(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a, b;
	int nums[10] = { 7, 3, 5, 2, 1, 4, 6, 9, 10, 8 };

	cout << "Please type in a number" << "\n";
	cin >> a;
	cout << "Please type in another number" << "\n";
	cin >> b;

	cout << "before swap, a = " << a << " and b = " << b << "\n";
	swap(a, b);
	cout << "after swap (by value), a = " << a << " and b = " << b << "\n";
	swap(&a, &b);
	cout << "after swap by pointer reference, a = " << a << " and b = " << b << "\n";

	swap_ref(a, b);
	cout << "after swap using references, a = " << a << " and b = " << b << "\n";

	for (int i = 0; i < 10; i++) {
		//第i趟比较
		for (int j = 0; j < 10 - i - 1; j++) {
			//开始进行比较，如果arr[j]比arr[j+1]的值大，那就交换位置
			if (nums[j] > nums[j + 1]) {
				swap_ref(nums[j],nums[j+1]);
			}
		}
	}

	for_each(nums, nums + 10, [](int x) {cout << x; });

	for (int& i:nums)
	{
		cout << i;
	}

	for (size_t i = 0; i < 10; i++)		
	{
		cout << nums[i];
	}

	return 0;
}

