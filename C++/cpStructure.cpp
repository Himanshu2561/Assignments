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

    BOOK b1 = {1, "jiji", 4566};
    BOOK b2;

    cout<<b2.title<<endl;
 
    return 0;
}