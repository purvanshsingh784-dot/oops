#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    int rollNo;
    string name;
    double marks;
public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
     void display()
    {
        cout << "\n----- Student Record -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;
    }
    void grade()
    {
        if (marks >= 90)
            cout << "Grade: A" << endl;
        else if (marks >= 80)
            cout << "Grade: B" << endl;
        else if (marks >= 70)
            cout << "Grade: C" << endl;
        else if (marks >= 60)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: F" << endl;
    }
};
int main()
{
    Student s1;
    cout << "Student Record System (Object-Oriented Approach)\n";
    s1.input();
    s1.display(); 
    s1.grade();
    return 0;
}