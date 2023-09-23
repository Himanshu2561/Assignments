#include <iostream>
using namespace std;

int *max(int *a, int *b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int *p = max(&a, &b);
    cout << *p << endl;
    return 0;
}