#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    if (n < 0 )
    {
        cout<<"Invalid!";
        return 1;
    }
    
    int* marks = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Marks for subject "<<i+1<<" is : ";
        cin>>marks[i];
    }
    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        sum+=marks[i];
    }

    delete[] marks;
    double avg = (double)sum/n;
    cout<<"Average is: "<<avg<<endl;    
    return 0;
}