// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Swap(int *x, int *y) {
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;

	cout << "Swapped Numbers --> " << *x << "\t" << *y;
}
int main()
{
	int* x, * y, num1 = 5, num2 = 6;
	
	x = &num1;
	y = &num2;

	cout << "Before Swapp --> " << *x << "\t" << *y << endl;
	system("pause");
	Swap(x, y);
	return 0;

}
