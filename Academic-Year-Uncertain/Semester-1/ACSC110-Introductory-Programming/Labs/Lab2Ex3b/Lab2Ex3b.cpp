// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

const double Pi = 3.14;
int main()
{
	double width, height, radius, Area = 0, Perimeter = 0;

	cout << "Enter Width of Rectancle: ";
	cin >> width;

	cout << "\nEnter Height of Rectangle: ";
	cin >> height;

	cout << "\nEnter radius of circle : ";
	cin >> radius;

	Perimeter = 2*(width + height);
	Area = width * height;
	
	cout << "\nThe perimeter of the rectangle is : " << fixed << setprecision(1) << Perimeter ;
	cout << "\nThe Area of the rectangle is : " << fixed << setprecision(3) <<Area;

	Perimeter = 2 * Pi * radius;
	Area = Pi * (radius*radius);

	cout << "\nThe circumference of the Circle is : " << fixed << setprecision(4) << Perimeter;
	cout << "\nThe Area of the Circle is : " << fixed << setprecision(4) << Area<<endl;
	system("pause");
}
