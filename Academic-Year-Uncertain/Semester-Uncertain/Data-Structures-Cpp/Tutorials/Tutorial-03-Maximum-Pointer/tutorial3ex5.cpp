// tutorial3ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int SIZE = 5;

double* max(double* a, int size) {
    
    double* max;

    if (size == 0) {
        return NULL;
    }

    max = &a[0];

    for (int i = 0; i < size; i++) {
        
        if (*(a+i) > *max) {
            max = &a[i];
        }

    }

    return max;
}
int main()
{
    double arr[SIZE] = { 5.5, 3.3, 2.2, 7.7, 8.8 };
    double* maxPtr;

    maxPtr = max(arr,SIZE);

    cout << "Maximum Value from array is  --> "<<*maxPtr<<endl;
    
    system("pause");
    return 0;

}

