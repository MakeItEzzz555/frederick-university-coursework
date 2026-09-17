// revisionEx3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (a == b) {
        return a;
    }
    else if (a > b) {
        return GCD(a, a - b);
    }
    else { 
        return GCD(b, b - a); 
    }
}
int main()
{
    int m, n;
    cout << "Give 2 numbers --> ";
    cin >> m >> n;

    while (m <= 0 || n <= 0) {
        cout << "\nBoth numbers must be positive integers!" << endl;
        return 1;
    }
    cout << "The greatest common divisor of " << m << " and " << n << " is: "<< GCD(m, n) << endl;
    return 0;
}

