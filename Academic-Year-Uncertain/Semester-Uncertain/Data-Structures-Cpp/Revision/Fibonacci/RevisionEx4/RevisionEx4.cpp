
// RevisionEx4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int  FibonacciSeq(int am, int a = 0, int b = 1) {

    if (am == 0){
        return 0;
    }
    else if (am == 1) { 
        return 1;
    }

    return FibonacciSeq(am - 1) + FibonacciSeq(am - 2);
}
int main()
{
    int am;

    cout << "Insert amount of fibonacci numbers you want to output --> ";
    cin >> am;

    cout << "The first " << am << " numbers of the Fibonacci Series are: ";
    
    for (int i = 0; i < am; ++i) {
        cout << FibonacciSeq(i) << " ";
    }
    cout << endl;

    return 0;
}

