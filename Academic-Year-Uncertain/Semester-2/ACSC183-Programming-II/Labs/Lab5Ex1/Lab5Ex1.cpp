// Lab5Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int avgChar = 0, totalChars = 0,sent = 0, i;
	string line;

	ifstream File("CyprusNews.txt");

	while (!File.eof()) {

		getline(File, line);

		for (i = 0; i < size(line); i++) {

			if (line[i] == '.') {

				sent++;

			}
			else{
				totalChars++;
			}

		}
		
	}
	avgChar = totalChars / sent;

	cout << "\nNumber of Sentences ==> "<< sent;

	cout << "\nTotal Characters in File ==> " << totalChars;
	
	cout << "\nAverage Characters Per Sentence ==> "<<avgChar;

	system("pause");
	return 0;

    
}

