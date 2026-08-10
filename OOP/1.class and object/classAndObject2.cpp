#include <iostream>

using namespace std;

// class classname{
//     //property
//     public :
//         datatype propertyname;
// };

class Book
{
public:
    int pages;
    string bookname, authorname;
};

int main()
{
    int n;
    // Book book1;
    cout << "Enter the No. of Books : ";
    cin >> n;
    Book allbooks[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter BookName : ";
        cin >> allbooks[i].bookname;
        cout << "Enter Author Name : ";
        cin >> allbooks[i].authorname;
        cout << "Enter No. of Pages : ";
        cin >> allbooks[i].pages;
    }


    for (int i = 0; i < n; i++)
    {
        cout << "Book Name : " << allbooks[i].bookname << ",";
        cout << "Author Name : " << allbooks[i].authorname << ",";
        cout << "No. Of Pages : " << allbooks[i].pages << endl;  
    }


    return 0;
}