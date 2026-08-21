#include<iostream>
using namespace std;

class BankAccount{
    public : 
        int accountNumber;
        string accountHolderName;
        double balance;

    void deposit(double amount){
        this->balance +=amount;
    }

    void withdraw(double amount){
        if(this->balance >= amount){
            this->balance -= amount;
            cout << amount <<" withdrawal Successfully" << endl;
            return;
        }
        cout << "Not Valid Amount" << endl;
    }

    double getBalance(){
        return this->balance;
    }

    void displayAccountInfo(){
        cout << "Acount Holder Name :" << this->accountHolderName << endl;
        cout << "Acount Number :" << this->accountNumber << endl;
        cout << "Acount Balance :" << getBalance() << endl;

    }
};

class SavingsAccount : public BankAccount{
    public :
        float interestRate = 0.7;

    void calculateInterest(){
        cout << this->getBalance() * interestRate << endl;
    }
};

class CurrentAccount : public BankAccount{
    public: 
        double overdraftLimit = 30000;
    
        void checkOverdraft(){
            if (this->overdraftLimit > 0)
            {
                cout << "OverDraft Available !!" << endl;
                return;
            }
            cout << "Limit Exceed" << endl;
        }
};

class FixedDepositAccount : public BankAccount{
    public:
        int months;
    FixedDepositAccount(int m){
        this->months = m;
    }

    void calculateInterest(){
        cout << this->getBalance() * (0.7 * this->months) << endl;
    }
};

int main(){


    return 0;
}
