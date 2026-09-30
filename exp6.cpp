#include <iostream>
using namespace std;
// class Student{
//     int id;
// public:
//     Student(){
//         id = 0;
//         cout << "Default Constructor called" << endl;
//     }
//     Student(int x){
//         id = x;
//         cout << "Parameterized Constructor called" << endl;
//     }
//     Student(const Student &s){
//         id = s.id;
//         cout << "Copy Constructor called" << endl;
//     }
//     void display(){
//         cout << "Student ID: " << id << endl;
//     }
//     ~Student(){
//         cout << "Destructor called for ID: " << id << endl;
//     }
// };
// int main(){
//     Student s1;
//     Student s2(101);
//     Student s3 = s2;
//     s1.display();
//     s2.display();
//     s3.display();
//     return 0;
// }
class student {
    int marks;
    string name;
public:
    student(int m,string n){
        marks = m;
        name = n;
    }
    student(){
        cout<< "Default constructor called" << endl;
    }
    student(const student &s){
        marks = s.marks;
        name = s.name;
        cout<< "Copy constructor called" << endl;
    }
    void show(){
        cout<< "Marks: " << marks;
        cout<< ",  Name: " << name << endl;
    }
};
int main(){
    student s1(90,"Vikas");
    student s2=s1;
    s1.show();
    s2.show();
}