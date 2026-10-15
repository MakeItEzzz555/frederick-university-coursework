// Lab2Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

const char EuroSign = 128;

class PC {

    public:
        float Case, Monitor, Keyboard;
        float sum = 0;

        float TotalCost() 
        {
            sum = (Case + Monitor + Keyboard);
            return sum;
        }

        float TotalCostDollar() 
        {
            float Dollar = 1.05;

            sum = Dollar * sum;

            return sum;
        }
};
int main()
{
    PC parts;

    cout << "Enter Price For Case -->";
    cin >> parts.Case;
    cout << "\nEnter price for Monitor -->";
    cin >> parts.Monitor;
    cout << "\nEnter price for Keyboard -->";
    cin >> parts.Keyboard;

    cout << fixed << setprecision(2);
    cout << "\nTotal Cost in Euros Is:"<<EuroSign << parts.TotalCost();
    cout << "\nTotal cost in Dollars : $"  <<parts.TotalCostDollar();
    cout << endl;

    system("pause");

    return 0;
}