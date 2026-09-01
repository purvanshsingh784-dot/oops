#include <iostream>
using namespace std;

void callByValue(int x)
{
    x =10;
    cout << "Inside Call by Value: " << x << endl;
}
void callByReference(int &x)
{
    x =55;
    cout << "Inside Call by Reference: " << x << endl;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Original Value: " << num << endl;
    callByValue(num);
    cout << "After Call by Value: " << num << endl;
    callByReference(num);
    cout << "After Call by Reference: " << num << endl;
    return 0;
}