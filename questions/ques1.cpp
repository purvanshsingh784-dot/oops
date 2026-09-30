#include <iostream>
using namespace std;

class Student{

    int rollNumber;
    int studentName;
    Student* nextStudent;
    Student(int roll, int name){
        rollNumber = roll;
        studentName = name;
        nextStudent = nullptr;

    }
};
int main(){



}