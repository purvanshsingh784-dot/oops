#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    double CGPA;
public:
    class Address {
    private:
        string city;
        string state;
    public:
        Address(string city, string state) {
            this->city = city;
            this->state = state;
        }
        void displayAddress() {
            cout << "Address: " << city << ", " << state << endl;
        }
    };
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->CGPA = 0.0;   
    }
    Student(int rollNo, string name, double CGPA) {
        this->rollNo = rollNo;
        this->name = name;
        this->CGPA = CGPA;
    }
    void updateCGPA(double CGPA) {
        this->CGPA = CGPA;
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};
int main() {
    Student students[5] = {
        Student(101, "Rahul"),
        Student(102, "Aman", 8.2),
        Student(103, "Riya"),
        Student(104, "Priya", 9.1),
        Student(105, "Karan")
    };
    students[0].updateCGPA(7.8);
    students[2].updateCGPA(8.5);
    students[4].updateCGPA(9.0);
    cout << "===== STUDENT DETAILS =====\n\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        students[i].display();
        Student::Address address("Ghaziabad", "Uttar Pradesh");
        address.displayAddress();
        cout << endl;
    }
    return 0;
}