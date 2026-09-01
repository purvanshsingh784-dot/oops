#include<bits/stdc++.h>
using namespace std;
class student{
    private:
        int rollno;
        string name;
        float marks;
        public:
        void input(){
            cout<<"Enter Roll Number: ";
            cin>>rollno;
            cin.ignore();
            cout<<"Enter Name: ";
            getline(cin,name);
            cout<<"Enter Marks: ";
            cin>>marks;
        }
        void display(){
            cout<<"\n----- Student Record -----"<<endl;
            cout<<"Roll Number : "<<rollno<<endl;
            cout<<"Name        : "<<name<<endl;
            cout<<"Marks       : "<<marks<<endl;
        }
};
int main(){
    student s1;
    cout<<"student record system"<<endl;
    s1.input();
    s1.display();
    return 0;
}
