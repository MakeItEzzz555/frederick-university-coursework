
#include <iostream>

using namespace std;

const int SIZE = 10;
void init(char list[], int size);
int upper(char list[], int size);
int lower(char list[], int size);
void display(char list[], int size);
void sortb(char list[], int size);

void Menu(char list[], int size) {
	int choice = 0;
	do {
		cout << "\n1)Read characters\n2)Uppercase characters\n3)Lowercase characters\n4)Sort list\n5)Display\n6)Quit\n";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1:
			init(list, size);
			break;
		case 2:
			cout << "\nNumber of Uppercase Characters ==> " << upper(list, size);
			break;
		case 3:
			cout << "\nNumber of Lowercase Characters ==> "<< lower(list, size);;
			
			break;
		case 4:
			cout << "\nSorted Characters ==> ";
			sortb(list, size);
			break;
		case 5:
			cout << "\nDisplay ==> ";
			display(list, size);
			break;
		case 6:
			cout << "\nProgram WIll SHut Down\n";
			system("pause");
			break;
		}


	}while (choice != 6);

}
//###############################################################################
//==============================================================================
int main()
{
	char chars[SIZE];

	Menu(chars, SIZE);

	system("pause");
	return 0;

}
//=============================================================================
//##############################################################################
void init(char list[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "\nEnter character [" << i + 1 << "] ==> ";
		cin >> list[i];
	}
	cout << "\nCharacters entered successfully!\n";
}

int upper(char list[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		if (isupper(list[i])) {
			sum++;
		}
	}
	return sum;
}

int lower(char list[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		if (islower(list[i])) {
			sum++;
		}
	}
	return sum;
}
void display(char list[], int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {

		cout << list[i] << "\t";
	}
}
void sortb(char list[], int size) {
	char tmp =' ';
	for (int i = 0; i < size - 1; i++) {
		for (int j = i+1; j < size; j++) {
			
			if (list[i] > list[j]) {
				tmp = list[j];
				list[j] = list[i];
				list[i] = tmp;
			}
		}
	}
	display(list, size);
}
