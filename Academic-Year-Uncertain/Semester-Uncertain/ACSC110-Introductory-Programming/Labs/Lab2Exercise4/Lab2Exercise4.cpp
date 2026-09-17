// Lab2Exercise4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x1, x2, x3;
    double y1, y2;

    cout << "Practicing With Integer And Double Numbers\n";
    cout << "==========================================\n\n";

    cout << "Insert 3 Integer Numbers --> ";
    cin >> x1 >> x2 >> x3;

    cout << "\nInsert 2 Real numbers (exp --> 2.5 ,3.1 ,9.6 ,etc...) --> ";
    cin >> y1 >> y2;

    cout << endl;

    cout << x1 << endl << x2 << endl << x3 << endl;
    cout << fixed << setprecision(2) << y1 << endl << y2 <<endl;
    
    cout << showpos;
 
    cout << x1 << endl;
 
    cout << x2 << endl;

    cout << x3 << endl;

    cout << fixed << setprecision(1);
    cout << y1 << endl;
    cout << y2 << endl;

 
    cout << scientific << y1 << endl;
    cout << scientific << y2 << endl;

    cout << sqrt(x1) << "\t" << x2 << "\t" << x3 << endl;
    system("pause");
    system("CLS");

    return 0;
}
