// tutorial3ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
const int SIZE = 10;
int countEven(int*num,int size) {
	int even = 0;
	for (int i = 0; i < size;i++) {
		if (*(num + i) % 2 == 0) {
			even++;
		}
	}
	
	return even;
}
int main()
{
	int arr[SIZE] = { 2, 3, 4, 5, 6, 7, 8, 10, 11, 13 };
	int even;
	int* ptr;
	ptr = arr;

	even = countEven(ptr, SIZE);
	cout << "Number of even numbers --> "<<even<<endl;
	system("pause");
	return 0;
}

