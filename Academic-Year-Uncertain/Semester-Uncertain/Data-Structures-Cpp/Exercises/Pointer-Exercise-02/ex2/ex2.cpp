// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int x = 0, y= 0;
	x= 6;
	y= 5;
	
	int* ptrX = &x, *ptrY = &y;

	*ptrX = *ptrX * (*ptrY);

	cout << *ptrX;
	
	return 0;
}


