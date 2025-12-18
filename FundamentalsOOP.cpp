#include <iostream>

using namespace std;

class BankAccount {
    private:
        double balance;
    public:
        BankAccount(double b) : balance(b) {}
        void deposit(double amt) { if(amt > 0) balance += amt; }
        void withdraw (double amt) { if(amt > 0 && amt <= balance) balance -= amt; }
        double getBalance(){ return balance; }
};

int main()
{
    BankAccount acct(1000);
    acct.deposit(200);
    acct.withdraw(500);
    double balance = acct.getBalance();

    cout << "The balance is: " << balance << endl;
}