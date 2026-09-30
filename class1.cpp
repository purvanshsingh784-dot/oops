#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<double>salary={40000,100000,700000,200000,45000,55000};
    for(auto value:salary){
        cout<<value<<" "<<endl;
    }
    double TotalSalary=0;
    for(auto value:salary){
        TotalSalary+=value;  
    }
    cout<<"Total salary: "<<TotalSalary<<endl;
    double highestsalary=salary[0];
    for(auto value:salary){
        if(value>highestsalary){
            highestsalary=value;
        }
    }   
    cout<<"Highest salary: "<<highestsalary<<endl;
    int count=0;
    for(auto value:salary){
        if(value>50000){
            count++;
        }
    }
    cout<<"Number of employees having salary less than 50000: "<<count<<endl;
    double x=0;
    for(auto value:salary){
        x=TotalSalary/salary.size();
    }
    cout<<"Average salary: "<<x<<endl;
}