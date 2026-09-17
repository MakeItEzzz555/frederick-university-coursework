// tutorial3ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* dynamic_alloc(int size) {

    int* ptr = new int[size];

    for (int i = 0; i < size;i++) {
        cout << "\nEnter number for array -->";
        cin >> *(ptr + i);
    }

    return ptr;
    
}

int main()
{
    int size = 5;
    int* array = dynamic_alloc(size);

    cout << "\nPrinted array -->";

    for (int i = 0; i < size; i++) {
        cout << *(array + i);
    }

    delete[] array;
    
    return 0;
}

