// Lab2Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

class Shapes {

public:
    float width, height;

    float Area() {//Area function
        float sum = 0;
         
        sum = (width * height);//Area logic
        return sum;
    }

    float Perimeter() {//Perimeter function

        float sum = 0;

        sum = 2*(width) + 2*(height);//perimeter logic
        return sum;
    }
};


int main()
{
    //creating an object to access methods from Shapes class
    Shapes square;

    cout << "Enter width of shape --> ";
    cin >> square.width;
    cout << "\nEnter height of shape -->";
    cin >> square.height;

    cout << "\nArea is :" << setprecision(3) << square.Area();
    cout << "\nPerimeter is:" << setprecision(3) << square.Perimeter() << endl;

    system("pause");

}

