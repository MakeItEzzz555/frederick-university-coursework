// Lab4Assign1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Student {
public:
	int id = 0;
	double gpa = 0;
	string name;
	Student()  {

	}
};
class Node {
public:
	Student* student;
	Node* next;
	Node* prev;
	Node():next(nullptr), prev(nullptr){
		student = new Student;
		cout << "Give student name -->";
		cin >> student->name;
		cout << "\nGive ID -->";
		cin >> student->id;
		cout << "\nGive GPA-->";
		cin >> student->gpa;
	}
};
class List {
public:
	Node* head;
	Node* last;

	List() : head(nullptr),
		last(nullptr) {}

	void AddNode();
	int count();
	void removeFirst();
	void printList(int count);
};
int List::count() {
	int cnt = 0; // initialises a counter variable
	Node* p = head; // creates a node pointer that is initialised to the
	cout << "\nHEAD --> " << p;
	while (p) { // repeats the loop until p points at an element and not 

		cnt++; // performs the desired action of the traversal. Here 

		p = p->next; // p moves to the next element of the list
	}
	cout << "\nHEAD --> " << p;
	return cnt;
}
void List::printList(int counter) {
	Node* ptr = head;

	if (!ptr) {
		cout << "The list is empty." << endl;
		return;
	}
	cout << "\nNumber of students --> " << counter << endl;
	while (ptr) {

		cout
			<< "\nID --> " << ptr->student->id
			<< "\nName--> " << ptr->student->name
			<< "\nGPA--> " << ptr->student->gpa;

		ptr = ptr->next;
	}
}
void List::AddNode() {

	if (head == nullptr) {
		Node* nd = new Node();
		head = nd;
		last = nd;
		nd->next = nullptr;
	}

	else {
		Node* nd = new Node();
		nd->next = nullptr;
		last->next = nd;
		nd->prev = last;
		last = nd;
		
	}

}

void List::removeFirst() {
	if (head) { // only necessary of there is something in the list 
		Node* p = head; // create a local variable to keep the old head

		head = head->next; // make the head look at the second element 
		delete p; // delete the old head pointed by the temporary variable 
		if (head == nullptr) last = nullptr; // if head now empty, update
	}
}

void Menu() {
	bool run = true;
	do {
		
		int choice;
		cout << "\n1.Add New Node";
		cout << "\n2.Count Nodes";
		cout << "\n3.Remove First Node";
		cout << "\n4.Print List of Nodes";
		cout << "\n5.Exit";
		cout << "\nSelect --> ";
		cin >> choice;
		List list;
		switch (choice) {

		case 1:
			list.AddNode();
			break;
		case 2:
			int count;
			count = list.count();
			cout << "\nNumber of Nodes -->" << count;
			break;
		case 3:
			list.removeFirst();
			break;
		case 4:
			list.printList(list.count());
			break;
		case 5:
			run = false;
			break;

		default:
			cout << "\nPlease enter a valid number to select an option" << endl;

		}
	} while (run);

}

using namespace std;
int main()
{

	Menu();
	cout << "Program Exits ...";
	system("pause");
	return 0;
	
}

