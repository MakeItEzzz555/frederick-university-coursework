// FilesLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int sum(int x, int y) {
	return x + y;
}
double avg(int x, int y){
	return double((x + y)) / 2;
}

int main()
{
	//cout << "Sum is :";
	string line;
	ofstream File;
	File.open("out.txt");
	ifstream readFile("out.txt");
	ofstream writeFile("in.txt");
	int num1,num2,i = 1;

	while (cout << "Enter 2 numbers ( TERNINATE WITH A CHARACTER )==> " && cin >> num1 >> num2) {
		if (i == 1) {
			
			File << num1 << " " << num2;
		}
		else {
			File << endl << num1 << " " << num2;
		}
		//getline(readFile,line);
		writeFile << sum(num1, num2) << " " <<avg(num1, num2) << endl;
		i++;
	}

	File.close();

	

	system("pause");
	return 0;
}
