#include <iostream>
using namespace std;

int main(){
    int number1,number2;
    int choice;
    cout<<"Simple calculator program"<<endl;

    while (true)
    {
        cout<<"Enter the numbers: ";
        cin>>number1>>number2;
        char yesno;

        cout<<"1. Addition 2. Subtraction 3. Division 4. Multiplication         Select your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"The sum is: "<<number1+number2;
            break;
        case 2:
            cout<<"The Difference is: "<<number1-number2;
            break;
        case 3:
            cout<<"The Remainder is: "<<number1%number2;
            cout<<"The Quotient is: "<<number1/number2;
            break;
        case 4:
            cout<<"The Product is: "<<number1*number2;
            break;
        }

        cout<<"Another operation?";
        cin>>yesno;

        if (yesno == 'Y' || yesno == 'y')
        {
            continue;
        }
        if(yesno == 'N' || yesno == 'n'){
            break;
        }
    }
    
}