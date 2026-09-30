#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNo;
    double balance;
public:
    BankAccount(int acc, double bal)
    {
        accountNo = acc;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
            cout << "Insufficient balance.\n";
    }
    void showBalance()
    {
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};
int main()
{
    BankAccount acc(101, 5000);
    acc.showBalance();
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.showBalance();
    return 0;
}