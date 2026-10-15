// HomeExam2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>


using namespace std;

bool compare(char *string1, char *string2) {

    if (strlen(string1) > strlen(string2)) {

        if (strlen(string1) <= 20) {
            cout << "\nTrue";
            return true;
        }
        else {
            cout << "\nFalse";
            return false;
        }
    }
    else {
        if (strlen(string2) <= 20) {
            cout << "\nTrue";
            return true;
        }
        else {
            cout << "\nFalse";
            return false;
        }
    }
    
}
int main()
{
    char s1[100], s2[100];

    cout << "Give word 1 ==> ";
    cin.getline(s1,100);

    cout << "\nGive word 2==> ";
    cin.getline(s2, 100);
    
    compare(s1, s2);

    return 0;
}

