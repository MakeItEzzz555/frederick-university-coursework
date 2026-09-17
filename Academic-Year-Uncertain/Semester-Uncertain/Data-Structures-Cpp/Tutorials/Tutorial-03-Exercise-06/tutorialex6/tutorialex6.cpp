// tutorialex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int var = 5;
	int* firstPtr;
	int** secondPtr;

	firstPtr = &var ;
	secondPtr = &firstPtr;

	cout << "Value before change --> "<<**secondPtr<<endl;
	cout <<"Change the value of variable through the pointer that points to the pointer  -->";
	cin >> **secondPtr;
	cout << "\nValue after change --> " << **secondPtr << endl;
	system("pause");
	return 0;
}

