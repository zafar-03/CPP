#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
class LibraryItem{
    private : 
        string title;
        string author;
        string dueDate;
        bool isavailable = true;

    public:
        virtual void checkOut() = 0;
        virtual void returnItem() = 0;
        virtual void displayDetails() = 0;
        
        LibraryItem(){
            this->title = "";
            this->author = "";
            this->dueDate = "";
        }
        LibraryItem(string t,string a,string d){
            this->title = t;
            this->author = a;
            this->dueDate = d;
        }
        string getTitle(){
            return this->title;
        }
        string getAuthor(){
            return this->author;
        }
        string getDueDate(){
            return this->dueDate;
        }
        void setTitle(string newTitle){
            this->title = newTitle;
        }
        void setAuthor(string newAuthor){
            this->author = newAuthor;
        }
        void setDueDate(string newDueDate){
            this->dueDate = newDueDate;
        }
};

class Book : public LibraryItem{
    public : 
        string pages;

        Book(string t,string a,string d,string p) : LibraryItem(t,a,d){
            this->pages = p;
        }
        void checkOut(){

        }
        void returnItem(){

        }
        void displayDetails() {
            cout << "Book Title :"  << this->getTitle() << endl;
            cout << "Book Author :"  << this->getAuthor() << endl;
            cout << "Book DueDate : "  << this->getDueDate() << endl;
            cout << "Book Pages :" << this->pages << endl << endl;
        }
        ~Book(){
           cout << "Book Remove Successfully" << endl;
        }
};
class DVD : public LibraryItem{
    public:
        string duration;
        DVD(string t,string a,string d,string duration) : LibraryItem(t,a,d){
            this->duration = duration;
        }
        void checkOut(){
            
        }
        void returnItem(){
            
        }
         void  displayDetails()  {
            cout << "DVD Title :"  << this->getTitle() << endl;
            cout << "DVD Author :"  << this->getAuthor() << endl;
            cout << "DVD DueDate : "  << this->getDueDate() << endl;
            cout << "DVD Duration :" << this->duration << endl << endl;
        }
        ~DVD(){
           cout << "DVD Remove Successfully" << endl;
        }
};

class Magazine : public LibraryItem{
    public:
        string issueNumber;
        Magazine(string t,string a,string d,string isbn) : LibraryItem(t,a,d){
            this->issueNumber = isbn;
        }
        void checkOut(){
            
        }
        void returnItem(){
            
        }
        void displayDetails() {
            cout << "Magzine Title :"  << this->getTitle() << endl;
            cout << "Magzine Author :"  << this->getAuthor() << endl;
            cout << "Magzine DueDate : "  << this->getDueDate() << endl;
            cout << "Magzine isbn :" << this->issueNumber << endl << endl;
        }
        ~Magazine(){
            cout << "Megzine Remove Successfully" << endl;
        }
};

void displayAll(LibraryItem* libraryItems[],int totalCount){
    cout << "Display All Data" << endl;
    for (int i = 0; i < totalCount; i++)
    {
        libraryItems[i]->displayDetails();
    }
    
}

int main(){
    LibraryItem* libraryItems[100];
    int totalCount = 0;
    libraryItems[totalCount++] = new Book("The Alchemist","Paulo Coelho","30-08-2026","300");

    libraryItems[totalCount++] = new DVD("Avengers: Endgame","Marvel Studios","30-08-2026","3 hours 1 minute");

    libraryItems[totalCount++] = new Magazine("TIME Magazine","TIME Editorial Team","30-08-2026","978-1-23456-789-0");

    int choice;
    while (true)
    {
        cout << "===============Library Management System=============="<<endl;
        cout << "1. Display All" << endl;
        cout << "2. Search Items" << endl;
        cout << "3. check out" << endl;
        cout << "4. return" << endl;
        cout << "5. Exit" << endl;
        cout << "Please Enter Your Choice : ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            displayAll(libraryItems,totalCount);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5: exit(0);
        default: cout << "Please Enter Valid Choice !!" << endl;
            break;
        }
    }
    
    return 0;
}