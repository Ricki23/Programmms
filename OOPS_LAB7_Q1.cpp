#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        string name;
        int roll_no;
        int age;
    public:
        void getdata()
        {
            cout<<"Enter the name of student:";
            cin>>name;
            cout<<"Enter the roll_no of student:";
            cin>>roll_no;
            cout<<"Enter the age of the student:";
            cin>>age;
        }
        void display()
        {
            cout<<"\n\nName:-"<<name;
            cout<<"\n\nRoll_No:-"<<roll_no;
            cout<<"\n\nAge:-"<<age<<endl<<endl;
        }
};
class test:public student
{
    public:
        int maths;
        int oop;
        int dsa;
        int hse;
        int de;
        void getdata_test()
        {
            getdata();
            cout<<"ENter the marks in Maths:";
            cin>>maths;
            cout<<"ENter the marks in OOP:";
            cin>>oop;
            cout<<"Enter the marks in DSA:";
            cin>>dsa;
            cout<<"Enter the marks in HSE:";
            cin>>hse;
            cout<<"Enter the marks in DE:";
            cin>>de;
        }
        void enter_test()
        {
            int math=maths;
            int oops=oop;
            int dsa1=dsa;
            int hse1=hse;
            int de1=de;
        }
        void display_test()
        {
            cout<<"\n\nThe details of the student are:";
            display();
            cout<<"Marks in Maths :"<<maths<<endl<<endl;
            cout<<"Marks in OOP:"<<oop<<endl<<endl;
            cout<<"Marks in HSE:"<<hse<<endl<<endl;
            cout<<"Marks in DE:"<<de<<endl<<endl;
            cout<<"Marks in DSA:"<<dsa<<endl<<endl;
        }
};
class sports:public student
{
    public:
        string sports;
        string sport_grade;
        void getsports()
        {
            cout<<"Enter the sports student has played:";
            cin>>sports;
            cout<<"Enter the grade in sports:";
            cin>>sport_grade;
        }
        void display_sports()
        {
            cout<<"The student has played "<<sports<<" and has a grade of:-"<<sport_grade<<endl<<endl;
        }
};
class result:public test,public sports
{
    int tot_marks;
    int percentage;
    public:
        void calc_per()
        {
            cout<<"\n\nENter the details of the student once again \n\n";
            getdata_test();
            tot_marks=maths+oop+hse+de+dsa;
            percentage=tot_marks/5;
            display_test();
            cout<<"\n\nThe total marks is given by:"<<tot_marks;
            cout<<"\n\nThe percentage is given by:"<<percentage<<endl<<endl;
        }
        void sports_results()
        {
            getsports();
            display_sports();
        }
};

int main()
{
    test t1;
    t1.getdata_test();
    t1.display_test();
    result r1;
    r1.calc_per();
    r1.sports_results();
}