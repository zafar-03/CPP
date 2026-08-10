#include <iostream>

using namespace std;

class TimeConverter
{
    public : 
        int seconds,minutes,hours;


        void secondToHours(){
            hours = seconds/3600;
            minutes = (seconds%3600)/60;
            seconds = (seconds%3600)%60;
        
            cout << hours << ":" << minutes << ":" << seconds;
        }
        void hourToSeconds(){
            cout << "hourToSeconds";
        }
};

int main()
{
    TimeConverter t1;
    int choice;
    cout << "1. For (From seconds to HH:MM:SS)" <<endl;
    cout << "2. For (From HH:MM:SS to seconds)" << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter Value in a Seconds : ";
        cin >> t1.seconds;
        t1.secondToHours();
        break;
    case 2:
        cout << "Enter Total No. of Hours : ";
        cin >> t1.hours;
        cout << "Enter Total No. of Minutes : ";
        cin >> t1.minutes;
        cout << "Enter Total No. of Seconds : ";
        cin >> t1.seconds;
        t1.hourToSeconds();
        break;
    default:
        break;
    }
    return 0;
}