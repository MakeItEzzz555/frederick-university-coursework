// lab3ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
const int SIZE = 10;

int* sortArray(int* arrSort, int size) {
    int tmp;
    for (int i = 0; i < size-1; i++) {
        for (int k = 0; k < size-i-1;k++) {
            
            if (*(arrSort + k) < *(arrSort + k+1)) {
                tmp = *(arrSort + k+1);
                *(arrSort + k +1) = *(arrSort + k);
                *(arrSort + k) = tmp;   
            }
        }
        
    }
    return arrSort;
}
void printSorted(int* sortedArr, int size) {
    cout << "Sorted Array --> ";
    for (int i = 0; i < size; i++) {
        cout << *(sortedArr + i)<<"\t";
    }
}

int main()
{
    int arr[SIZE] = { 23,34,2,3,5,12,42,56,89,8 };

    int* ptrArr = sortArray(arr, SIZE);
    printSorted(ptrArr, SIZE);
    return 0;

}
