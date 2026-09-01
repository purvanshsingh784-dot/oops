#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
        int empid;
        string name;
        float salary;
    public:
        void input(){
            cout<<"Employee ID: ";
            cin>>empid;
            cin.ignore();
            cout<<"Employee Name: ";
            cin>>name;
            cout<<"Employee Salary: ";
            cin>>salary;
        }
        void display(){
            cout<<"\n----- Employee Record -----"<<endl;
            cout<<"Employee ID : "<<empid<<endl;
            cout<<"Employee Name : "<<name<<endl;
            cout<<"Employee Salary : "<<salary<<endl;
        }
};
int main(){
    employee E1;
    E1.input();
    E1.display();
    return 0;
}