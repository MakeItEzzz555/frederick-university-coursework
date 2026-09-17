// Lab2Exercise3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num1, num2, num3, num4;
    float sum = 0;

    cout << "\nEnter First Real Number :";
    cin >> num1;

    cout << "\n Enter Second Real Number :";
    cin >> num2;

    cout << "\nEnter Third Real Number :";
    cin >> num3;

    cout << "\nEnter Fourth Real Number :";
    cin >> num4;

    cout << endl;

    cout << num1 << " + " << num2 << " = " << fixed << setprecision(2) << num1 + num2 << endl;

    cout << num2 << " * " << num4 << " = "<< fixed << setprecision(3) << num2 * num4 << endl;

    cout << num3 << " - " << num1 << " = " << fixed << setprecision(1)<< num3 - num1 << endl;

    cout << num4 << " / " << num2 << " = "   << fixed << setprecision(2)<< num4 / num2 << endl;
    sum = ((num2 * num3) / num4) + num1;
    cout << num1 << " +" << num2 << " * " << num3 << " / " << num4 << " = " << fixed << setprecision(1)<< ((num2 * num3) / num4) + num1<<endl;

    system("pause");
    system("CLS");

    int num5, num6;
    int remainder = 0;

    cout << "\nEnter First Integer Number:";
    cin >> num5;

    cout << "\nEnter Second Integer Number:";
    cin >> num6;

    remainder = num5 % num6;

    cout << num5 << " % " << num6 << "=" << remainder<<endl;
    system("pause");

    return 0;
}

