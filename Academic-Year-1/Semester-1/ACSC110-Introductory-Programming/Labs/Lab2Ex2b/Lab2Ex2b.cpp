// Lab2Ex2b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	int hours, minutes, seconds;
   cout << "Enter hours -->";
   cin >> hours;

   cout << "Enter minutes -->";
   cin >> minutes;

   cout << "Enter Seconds -->";
   cin >> seconds;

   cout << "\nThe time " << hours << " hour," << minutes << " minutes, " << seconds << " seconds is equal to " << ((hours * 60) * 60) + (minutes * 60) + seconds << endl;
   system("pause");
}
