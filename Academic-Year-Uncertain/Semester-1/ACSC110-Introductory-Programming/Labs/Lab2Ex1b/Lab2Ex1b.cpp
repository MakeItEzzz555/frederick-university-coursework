// Lab2Ex1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int sum = 0, product = 0, average = 0;


    cout << "Enter numbers : ";
    cin >> x >> y >> z;

    sum = (x + y + z);
    product = (x * y * z);
    average = (sum / 3);

    cout << "\nThe sum is "<< sum;
    cout << "\nThe product is "<< product;
    cout << "\nThe average is " << average;
    system("pause");
}
