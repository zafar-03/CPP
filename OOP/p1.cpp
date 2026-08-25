#include <iostream>
#include<stdlib.h>

using namespace std;

class BankAccount
{
public:
    int accountNumber;
    static int noOfAccount;
    string accountHolderName;
    double balance;
    BankAccount(int num, string cname, double b)
    {
        this->accountNumber = num;
        this->accountHolderName = cname;
        this->balance = b;
    BankAccount:
        noOfAccount++;
    }

    void deposit(double amount)
    {
        this->balance += amount;
    }

    void withdraw(double amount)
    {
        if (this->balance >= amount)
        {
            this->balance -= amount;
            cout << amount << " withdrawal Successfully" << endl;
            return;
        }
        cout << "Not Valid Amount" << endl;
    }

    double getBalance()
    {
        return this->balance;
    }

    void displayAccountInfo()
    {
        cout << "Acount Holder Name :" << this->accountHolderName << endl;
        cout << "Acount Number :" << this->accountNumber << endl;
        cout << "Acount Balance :" << getBalance() << endl;
        cout << endl
             << endl;
    }
};

class SavingsAccount : public BankAccount
{
public:
    float interestRate;

    SavingsAccount(int num, string cname, double b, float ir) : BankAccount(num, cname, b)
    {
        this->interestRate = ir;
    }

    void calculateInterest()
    {
        cout << this->getBalance() * interestRate << endl;
    }
};

class CurrentAccount : public BankAccount
{
public:
    double overdraftLimit = 30000;

    CurrentAccount(int num, string cname, double b) : BankAccount(num, cname, b)
    {
    }

    void checkOverdraft()
    {
        if (this->overdraftLimit > 0)
        {
            cout << "OverDraft Available !!" << endl;
            return;
        }
        cout << "Limit Exceed" << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
public:
    int months;
    FixedDepositAccount(int num, string cname, double b, int m) : BankAccount(num, cname, b)
    {
        this->months = m;
    }

    void calculateInterest()
    {
        cout << this->getBalance() * (0.7 * this->months) << endl;
    }
};

int BankAccount::noOfAccount = 0;
int main()
{
    int choice;
    SavingsAccount *s[100];
    SavingsAccount s1(12346, "Rajveer S", 2000, 0.7);
    s[BankAccount::noOfAccount - 1] = &s1;
    SavingsAccount s2(1245346, "Rahul S", 6000, 0.7);
    s[BankAccount::noOfAccount - 1] = &s2;

    while (true)
    {
        cout << "ABC Bank" << endl;
        cout << "1. No of Accounts" << endl;
        cout << "2. Print All Accounts" << endl;
        cout << "3. Deposit" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << BankAccount::noOfAccount;
            break;
        case 2:
            for (int i = 0; i < BankAccount::noOfAccount; i++)
            {
                s[i]->displayAccountInfo();
            }
            break;
        case 3 :
            int ac;
            double amount;
            cout << "Enter Your Account Number : ";
            cin >> ac;
            cout  << "Amount :";
            cin >> amount;
            for (int i = 0; i < BankAccount::noOfAccount; i++)
            {
                if (s[i]->accountNumber == ac)
                {
                    s[i]->deposit(amount);
                    break;
                }
            }
            break;
        case 0 : exit(0);
        default:
            break;
        }
    }

    return 0;
}
