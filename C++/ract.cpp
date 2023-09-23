#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cout << "Enter length and breadth of ractangle: ";
    cin >> b >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if ((i == 1 && j == 1) || (i == l && j == b) || (i == l && j == 1) || (i == 1 && j == b))
            {
                cout << "+ ";
            }
            else if (i == 1 || i == l)
            {
                cout << "- ";
            }
            else if (j == 1 || j == b)
            {
                cout << "| ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
