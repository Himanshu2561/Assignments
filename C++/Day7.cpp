#include <iostream>

using namespace std;

void search(int *arr, int ele,int size){
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == ele){
            cout<<"\nElement found at "<<i<<" position";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout<<"Element does not exist";
    }
    
    
}

void sort(int *b, int s){
    for (int i = 0; i < s-1; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if(b[i]>b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    cout<<"\n The sorted array is: ";
    for(int x = 0;x<s;x++){
        cout<<b[x]<<" ";
    }

    cout<<"\n Max element: "<<b[s-1];
    cout<<"\n Min element: "<<b[0];
    cout<<"\n Second Max element: "<<b[s-2];
    cout<<"\n Second Min element: "<<b[1];
    
}

void display(int *a,int size){
    cout<<"The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *arr = new int(size);
    cout<<"Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    display(arr,size);
    int element;
    cout<<"\nEnter the element to be searched: ";

    cin>>element;
    search(arr,element,size);
    sort(arr,size);
    
}