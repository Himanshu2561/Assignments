#include <iostream>
using namespace std;

struct BOOK
{
    int bookId;
    string title;
    int price;
};

int main()
{

    BOOK bkArr[5];
    BOOK bk1;
    int i = 0;
    while (i < 5)
    {
        cout << "Enter Book ID for Book " << i << ": ";
        cin >> bkArr[i].bookId;
        cout << "Enter Book title for Book " << i << ": ";
        cin >> bkArr[i].title;
        cout << "Enter Book price for Book " << i << ": ";
        cin >> bkArr[i].price;
        i++;
    }
    i = 0;
    while (i < 5)
    {
        cout << "Details of book " << i << " :" << endl;
        cout << bkArr[i].bookId << endl;
        cout << bkArr[i].title << endl;
        cout << bkArr[i].price << endl;
        i++;
    }

    return 0;
}