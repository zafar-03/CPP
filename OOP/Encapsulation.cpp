#include<iostream>

using namespace std;

class Account{
    private:
        float balance = 3000.45;

    public:
    //setter Method
    void setBalance(float amount){
        this->balance += amount;
    }

    // getter
    double getBalance(){
        return this->balance;
    }
};

int main(){
    Account a1,a2;
    a1.setBalance(2000);
    
    cout << a1.getBalance() << endl;
    cout << a2.getBalance();

    return 0;
}