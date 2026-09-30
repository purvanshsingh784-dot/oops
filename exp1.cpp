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
        void grade(){
            if(marks>=90){
                cout<<"Grade: A"<<endl;
            }
            else if(marks>=80){
                cout<<"Grade: B"<<endl;
            }
            else if(marks>=70){
                cout<<"Grade: C"<<endl;
            }
            else if(marks>=60){
                cout<<"Grade: D"<<endl;
            }
            else{
                cout<<"Grade: F"<<endl;
            }
        }
};
int main(){
    student s1;
    cout<<"student record system"<<endl;
    s1.input();
    s1.display();
    s1.grade();
    return 0;
}
