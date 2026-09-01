#include <iostream>
using namespace std;
// // Inline function
// inline int add(int a, int b)
// {
//     return a + b;
// }
// // Function with default parameter
// int multiply(int a, int b=2)
// {
//     return a *b;
// }
// // function overloading
// int subtract(int a, int b)
// {
//     return a - b;
// }
// double subtract(double a, double b)
// {
//     return a - b;
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "Sum: " << add(num1, num2) << endl;
//     cout << "Product: " << multiply(num1) << endl;
//     cout << "Difference: " << subtract(num1, num2) << endl;
//     return 0;
// }
class student{
    public:
    int a,b;
    student(int a,int b){
        cout<<a+b;
    }
    student(double a,double b){
        cout<<a-b;
    }
};
int main(){
    student s1(10,20);
    student s2(10.5,5.5);
    return 0;
}