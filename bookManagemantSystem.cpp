#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
class LibraryItem{
    private : 
        string title;
        string author;
        string dueDate;

        virtual void checkOut() = 0;
        virtual void returnItem() = 0;
        virtual void displayDetails() = 0;
    public:
        LibraryItem(){

        }
        void getTitle(){

        }
        void getAuthor(){

        }
        void getDueDate(){

        }
        void setTitle(string newTitle){

        }
        void setAuthor(string newAuthor){

        }
        void setDueDate(string newDueDate){

        }
};

class Book : public LibraryItem{
    public : 
        Book(){

        }
        void checkOut(){

        }
        void returnItem(){

        }
        void displayDetails(){

        }
        ~Book(){
           cout << "Book Remove Successfully" << endl;
        }
};
class DVD : public LibraryItem{
    public:
        string duration;
        DVD(){

        }
        void checkOut(){
            
        }
        void returnItem(){
            
        }
        void displayDetails(){
            
        }
        ~DVD(){
           cout << "DVD Remove Successfully" << endl;
        }
};

class Magazine : public LibraryItem{
    public:
        string issueNumber;

        Magazine(){

        }
        void checkOut(){
            
        }
        void returnItem(){
            
        }
        void displayDetails(){
            
        }
        ~Magazine(){

        }
};


int main(){
    LibraryItem* libraryItems[100];
    int choice;
    while (true)
    {
        cout << "===============Library Management System=============="<<endl;
        cout << "1. Search Items" << endl;
        cout << "2. check out" << endl;
        cout << "3. return" << endl;
        cout << "4. Exit" << endl;
        cout << "Please Enter Your Choice : ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4: exit(0);
        default: cout << "Please Enter Valid Choice !!" << endl;
            break;
        }
    }
    
    return 0;
}