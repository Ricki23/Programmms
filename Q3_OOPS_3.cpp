#include<iostream>
using namespace std;
class Student
{
    public:
        char name[50];
        char branch[20];
        int roll_no;

        virtual void getdata()
        {
            cout<<"Enter name:"<<endl;
            gets(name);
            cout<<"Enter branch :"<<endl;
            gets(branch);
            cout<<"Enter the Roll_No:"<<endl;
            cin>>roll_no;
        }
        virtual void showdata()
        {
            cout<<"\nDetails of the student are:"<<endl<<endl;
            cout<<"Name of Student :"<<name<<endl;
            cout<<"Branch of Student:"<<branch<<endl;
            cout<<"Roll No of the Student:"<<roll_no<<endl;
        }
};
class Academics:public Student
{
    public:
        int marks_in_maths;
        int marks_in_oops;
        int marks_in_dsa;
        int marks_in_de;

        void getdata()
        {
            cout<<"\nEnter marks in Maths:"<<endl;
            cin>>marks_in_maths;
            cout<<"Enter marks in OOP: "<<endl;
            cin>>marks_in_oops;
            cout<<"Enter marks in DSA: "<<endl;
            cin>>marks_in_dsa;
            cout<<"Enter marks in DE: "<<endl;
            cin>>marks_in_de;
        }
        void showdata()
        {
            int tot,per;
            tot=marks_in_de+marks_in_dsa+marks_in_maths+marks_in_oops;
            per=tot/4;
            cout<<"\nMarks in maths: "<<marks_in_maths<<endl;
            cout<<"Marks in OOP: "<<marks_in_oops<<endl;
            cout<<"Marks in DSA: "<<marks_in_dsa<<endl;
            cout<<"Marks in DE: "<<marks_in_de<<endl;
            cout<<"Total marks: "<<tot<<endl;
            cout<<"Percentage: "<<per<<endl;
        }
};
int main()
{
    Student *s=new Student;
    Academics a;
    s->getdata();
    s->showdata();
    s=&a;
    s->getdata();
    s->showdata();
}