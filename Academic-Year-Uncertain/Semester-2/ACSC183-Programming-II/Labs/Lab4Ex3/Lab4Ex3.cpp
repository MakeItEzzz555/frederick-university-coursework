// Lab4Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>

using namespace std;

int const year = 2024;
void DispNameSurAge(char name[] , char surname[] ,char DateOfBirth[]) {
    cout << "\nPlease Enter Your Year Of Birth ==>";
    cin >> DateOfBirth;

    while (atoi(DateOfBirth) > 2024) {
        cout << "\nFalse Date Of Birth! Try Again ==>";
        cin >>  DateOfBirth;
    }

    int age = year - atoi(DateOfBirth);
    cout << name << " " << surname << " is " << age << " years old.\n";
}
int main()
{
    bool run = false;
    do {
        char name[20+1], sur[20+1], DoB[4+1], choice;
        bool invalid;

        cout << "Enter Your Name ==> ";
        cin >> name;
        cout << "\nPlease Enter Your Surname ==>";
        cin >> sur;

        if (!strcmp(name,"Nicos") && !strcmp(sur,"Christodoulides")) {

            cout << "Hello  sir!\n";
            cout << "Enter More Details ? (Y/N) ==> ";
            cin >> choice;

            if(choice == 'y' || choice == 'Y') {
                DispNameSurAge(name,sur,DoB);
            }

            else {}

        }

        else {
            DispNameSurAge(name, sur, DoB);
        }


        cout << "Try again ? (y/n) ==> ";
        cin >> choice;

        while ( (choice != 'Y' && choice != 'y') && (choice != 'N' && choice != 'n') ) {

            cout << "\nInvalid  Try again ==>";
            cin >> choice;
            
        }

        switch (choice) {
        case 'Y':
        case 'y':
            run = true;
            break;
        case 'N':
        case 'n':
            run = false;
        }
    } while (run);
    system("pause");
    return 0;
}

