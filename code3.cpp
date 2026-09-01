#include<bits/stdc++.h>
using namespace std;
void swapnumbers(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Before swapping: x="<<x<<" y="<<y<<endl;
    int a=x, b=y;
    swapnumbers(a,b);
    cout<<"After swapping (pass by value): x="<<x<<" y="<<y<<endl;
    swapnumbers(x,y);
    cout<<"After swapping (pass by reference): x="<<x<<" y="<<y<<endl;
}