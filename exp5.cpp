#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={10,20,30,40,50,60};
    for(auto value:numbers)
    {
        cout<<value<<" ";
    }
    return 0;
}