// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int const SIZE = 1000;

void reverse(char arr[],int size) {
	int i;
	char tmp;
	for (i = 0; i < size/2; i++) {
		tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
	cout << arr<<endl;
}

int main()
{
	char s[SIZE ];
	ifstream MyFile("input.txt");

	int lineLen = 0, max = 0, i = 1 , j = 0;
	char maxline[SIZE +1];
//------------Lab4Ex1------------------
	while (MyFile.getline(s, 1000)) {

		int len = strlen(s);//length of text

		cout << s << endl;//regular text

		reverse(s, len);//reversed text


//-----------------------------------



//-------------Lab4Ex2---------------

		if (len > max) {//checks for the max length of line
			max = i;
			lineLen = len;
			strcpy_s(maxline,s );
			
		}

//--------------------------------------
		i++;
	}
	cout << "\n\nThe Longetst Line Is At Row "<<max;
	cout << "\nThe Length Of The Longest Line Is " << lineLen;
	cout << "\nThe actual text is "<<maxline;

	system("pause");
	return 0;
}
