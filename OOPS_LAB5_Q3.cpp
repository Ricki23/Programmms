#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    string stdname;
    string stdsection;
    int stdroll_no;
    string stdcourse;
    int tot_marks;
};
void avgmarks(student s1[100],int n)
{
    int sum=0,avg;
    for(int j=0;j<n;j++)
    {
        sum=sum+s1[j].tot_marks;
    }
    avg=sum/n;
    cout<<"\nThe average marks scored by n students is:"<<avg<<endl;
    cout<<"\n\n The other details include:";
    for(int i=0;i<n;i++)
    {
        cout<<"\nName:"<<s1[i].stdname;
        cout<<"\nClass:"<<s1[i].stdcourse;
        cout<<"\nSection:"<<s1[i].stdsection;
        cout<<"\nRoll No:"<<s1[i].stdroll_no;
        cout<<"\nTotal marks:"<<s1[i].tot_marks<<endl<<endl;
    }
}
int main()
{
    student s1[100];
    int n,sum=0,avg,sub;
    cout<<"Enter the number of studnets:";
    cin>>n;
    cout<<"ENter the total number of subjects:";
    cin>>sub;
    for(int i=0;i<n;i++)
    {
        cout<<"\n\n";
        cout<<"For "<<i+1<<" student"<<endl;
        cout<<"Enter the name of student:";
        cin>>s1[i].stdname;
        cout<<"Enter the section of student:";
        cin>>s1[i].stdsection;
        cout<<"ENter the student roll number:";
        cin>>s1[i].stdroll_no;
        cout<<"ENter the student class:";
        cin>>s1[i].stdcourse;
        cout<<"Enter the total marks of the student:";
        cin>>s1[i].tot_marks;
    }
    avgmarks(s1,n);
    return 0;
}