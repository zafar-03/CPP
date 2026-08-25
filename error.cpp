#include <iostream>

using namespace std;

int main()
{
    // int n1,n2;
    // cout << "Enter the Value of n1 :";
    // cin >> n1;
    // cout << "Enter the Value of n2 :";
    // cin >> n2;

    // try
    // {
    //     if (n2 == 0)
    //     {
    //         throw "division by zero";
    //     }

    //     cout << n1/n2;
    // }catch(const char* mydata){
    //     cout << mydata << endl;
    // }

    // cout << "hello";
    float balance = 3000,amount;
    while (true)
    {
        try
        {
            cout << "Enter the value : ";
            cin >> amount;
            if (amount>balance)
            {
                throw "Transiction Declined" ;
            }
            balance-=amount;
            cout << "Successfully Withdraw!!" <<endl;
        }
        catch (...)
        {
            cout << "Something Wrong!!" << endl;
            break;
        }
    }

    return 0;
}