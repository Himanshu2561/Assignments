#include <iostream>
using namespace std;

char getGrades(int average){
    if(average>=90 && average<=100){
        return 'A';
    }
    else if(average>=80 && average<=89){
        return 'B';
    }
    else if(average>=70 && average<=79){
        return 'C';
    }
    else if(average>=60 && average<=69){
        return 'D';
    }
    else{
        return 'F';
    }
    
}

void display(string name, float avg, char grades){
    cout<<endl<<"Name: "<<name<<"         Percentage: "<<avg<<            "             Grades: "<<grades;
}


int main(){
    int number_of_students,no_subjects;                                // getting the number of students and subjects
    cout<<"Enter the number of students: ";
    cin>>number_of_students;
    string names[number_of_students];
    cout<<"Enter the number of subjects: ";
    cin>>no_subjects;

    int marks[number_of_students][no_subjects];              // creating a 2D array of students and subjects
    cout<<endl;

    for (int i = 0; i < number_of_students; i++)
    {
        cout<<endl<<"Name of Student: ";
        cin>>names[i];

        cout<<"Student "<<i+1<<" Marks details: "<<endl;
        int total = 0;
        for (int j = 0; j < no_subjects; j++)
        {
            cout<<"Marks for Subject "<<j+1<<": ";
            cin>>marks[i][j];
            
        }
    }

    
    for (int a = 0; a < number_of_students; a++)
    {
        int total = 0;
        for (int b = 0; b < no_subjects; b++)
        {
            total+=marks[a][b];
        }
        //cout<<total;
        int average = total/no_subjects;
        //cout<<average;
        char grades = getGrades(average);

        display(names[a],average,grades);
    }

// calculating the averages for each of the subjects for all the students
    for (int x = 0; x < number_of_students; x++)
    {
        int total = 0;
        for (int y = 0; y < no_subjects; y++)
        {
            total+=marks[y][x];
        }
       

    }

}