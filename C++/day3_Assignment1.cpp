#include <iostream>

using namespace std;

class Students_Data{

        public:
        int roll_no;
        string name;
        int subjects;
        int subject_marks[3] ;

        void getSubjects(int number){
                this->subjects = number;
            //    subject_marks = new int(subjects);
        }
};

void display(string name,int roll,float avg){
    cout<<endl<<"Name: "<<name<<" "<<"Roll Number: "<<roll<<" "<<"Percentage: "<<avg<<endl;

}



int main(){

    cout<<"Grade Sheet Calculator: ";
    int no_of_students;
    cout<<"Enter the number of students: ";
    cin>>no_of_students;
    Students_Data students[no_of_students];

    //int subjects;
    //cout<<"Number of subjects: ";
    //cin>>subjects;
    //students->getSubjects(subjects);   // passing the subjects as the formal argument 

    for (int i = 0; i < no_of_students; i++)
    {
        cout<<"Student "<<i+1<<" Name: ";
        cin>>students[i].name;

        cout<<"Student "<<i+1<<" Roll number: ";
        cin>>students[i].roll_no;

        int total = 0;
        for(int j = 0;j<3;j++){
            cout<<"Marks for subject "<<j+1<<": ";
            cin>>students[i].subject_marks[j];
            total +=students[i].subject_marks[j]; 
        }

        float average = float(total/3);

        display(students[i].name,students[i].roll_no,average);

    }
    

}