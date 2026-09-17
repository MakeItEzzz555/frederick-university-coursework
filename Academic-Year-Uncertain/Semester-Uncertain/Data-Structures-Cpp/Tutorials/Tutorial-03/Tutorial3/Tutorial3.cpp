// Tutorial3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    int* arr = new int[size];
    
    for (int i = 0; i < size;i++) {
        cout << "\nFill the array with numbers -->" ;
        cin >> *(arr + i);
    }

    cout << "\nArray -->";

    for (int i = 0; i < size; i++) {
        cout << *(arr + i);
    }

    delete[] arr;
    return 0;
}

