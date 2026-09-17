// turotial3ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int SIZE = 5;

int main()
{
	int* arr[SIZE];
	//Dynamically Allocate Memory
	for (int i = 0; i < SIZE; i++) {
		arr[i] = new int;
		cout << "Insert number for array --> ";
		cin >> *arr[i];
	}
	cout << "Array --> ";
	//Print and Delete Allocated Memory
	for (int i = 0; i < SIZE;i++) {
		cout <<*arr[i];
		delete arr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}

