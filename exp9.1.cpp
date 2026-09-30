#include <iostream>
#include <limits>
#include <string>
using namespace std;
class Student {
private:
	int rollNumber;
	string name;
	double marks;
public:
	void read() {
		cout << "Enter roll number: ";
		cin >> rollNumber;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter marks: ";
		cin >> marks;
	}
	void display() const {
		cout << "Roll number: " << rollNumber << ", Name: " << name
			 << ", Marks: " << marks << '\n';
	}
	double getMarks() const {
		return marks;
	}
};
int main() {
	int count;
	cout << "Enter the number of students: ";
	cin >> count;
	if (!cin || count <= 0) {
		cout << "The number of students must be a positive integer.\n";
		return 1;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	Student* students = new Student[count];
	for (int i = 0; i < count; ++i) {
		cout << "\nStudent " << i + 1 << '\n';
		students[i].read();
	}
	cout << "\nStudent records:\n";
	for (int i = 0; i < count; ++i) {
		students[i].display();
	}
	Student* highest = students;
	for (Student* current = students + 1; current < students + count; ++current) {
		if (current->getMarks() > highest->getMarks()) {
			highest = current;
		}
	}
	cout << "\nStudent with the highest marks:\n";
	highest->display();
	delete[] students;
	return 0;
}