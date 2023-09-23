#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char temp[20], *t;
    int i, l, j, n = 5;
    char *s[5];
    cout << "Enter 5 Strings (space seperated): ";
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        l = strlen(temp);
        s[i] = (char *)malloc(sizeof(char) * l + 1);
        strcpy(s[i], temp);
    }
    for (size_t i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    cout << "Sorted: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}