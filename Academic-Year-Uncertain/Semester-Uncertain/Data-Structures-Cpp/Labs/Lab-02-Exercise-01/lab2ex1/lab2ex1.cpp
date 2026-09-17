#include <iostream>
#include <string>

using namespace std;

const int SIZE = 2;

struct Student {
    string name, surname, student_code;
    int age;
};

Student stud[SIZE];

void Populate(Student stud[SIZE]) {

    for (int i = 0; i < SIZE; i++) {

        cout << "Enter student id --> ";
        cin >> stud[i].student_code;

        cout << "\nEnter Name and Surname --> ";
        cin >> stud[i].name >> stud[i].surname;

        cout << "\nEnter Age -->";
        cin >> stud[i].age;

        cout << "\nInfo for student " << i + 1 << " Saved Succesfully" << endl;
    }


}

void PrintInfo(Student stud[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "\nStudent ID: " << stud[i].student_code << "\tName: " << stud[i].name << "\tSurname: " << stud[i].surname << "\tAge: " << stud[i].age << endl;
    }
}

int main() {

    Populate(stud);
    PrintInfo(stud);

    return 0;
}