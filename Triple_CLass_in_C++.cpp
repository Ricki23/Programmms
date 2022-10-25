#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    int class_std;
    int roll_no;
    string section;
    public:
        void get_data()
        {
            string name1,section1;
            int class_std1,roll_no1;
            cout<<"Enter the name of the student:";
            cin>>name1;
            cout<<"ENter the class of the student:";
            cin>>class_std1;
            cout<<"Enter the roll no of the student:";
            cin>>roll_no1;
            cout<<"Enter the section of the student:";
            cin>>section1;
            name=name1;
            class_std=class_std1;
            section=section1;
            roll_no=roll_no1;
        }
        void display()
        {
            cout<<"\n\nThe details if the students are:"<<endl;
            cout<<"Name of student="<<name<<endl;
            cout<<"Class of student:"<<class_std<<endl;
            cout<<"Roll No of student:"<<roll_no<<endl;
            cout<<"Section of student:"<<section<<endl;
            cout<<endl<<endl;
        }
};
class marks
{
    int OOPS;
    int DSA;
    int HSE;
    int Maths;
    public:
        void getdata_marks()
        {
            int OOPS1,DSA1,HSE1,Maths1;
            cout<<"Enter the marks in OOP(out of 20):";
            cin>>OOPS1;
            cout<<"Enter the marks in HSE(out of 20):";
            cin>>HSE1;
            cout<<"Enter the marks in Maths(out of 20):";
            cin>>Maths1;
            cout<<"Enter the marks in DSA(out of 20):";
            cin>>DSA1;
            OOPS=OOPS1;
            DSA=DSA1;
            HSE=HSE1;
            Maths=Maths1;
        }
        void display_marks()
        {        
            cout<<"\n\nThe details if the students are:"<<endl;
            cout<<"marks of student in OOP:"<<OOPS<<endl;
            cout<<"marks of student in HSE:"<<HSE<<endl;
            cout<<"marks of student in DSA:"<<DSA<<endl;
            cout<<"marks of studentin Maths:"<<Maths<<endl;
            cout<<endl<<endl;
        }
        friend class Result;
};

class Result
{
    int total_marks;
    int percentage; 
    public:
        void tot_marks(marks &m1)
        {
            int per1;
            total_marks=m1.OOPS+m1.DSA+m1.HSE+m1.Maths;
            per1=total_marks/80;
            percentage=(per1*100);
            cout<<"The total marks of the studnet is given by:";
            cout<<total_marks<<endl;
            cout<<"Percentage of the student is given by:";
            cout<<percentage;
        }
};

int main()
{
    student s1;
    s1.get_data();
    s1.display();
    marks m1;
    m1.getdata_marks();
    m1.display_marks();
    Result r1;
    r1.tot_marks(m1);
}