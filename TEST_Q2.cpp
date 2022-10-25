#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class CSE21
{
    public:
        int roll;
        char name[100];
        char grade[100];
        CSE21()
        {
            roll=0;
            char name1[100]="pragyan";
            char grade1[100]="CSE21";
            cout<<"Student details are stored by default:"<<endl;
            cout<<"Name:-"<<strcpy(name,name1)<<endl;
            cout<<"Roll no:-"<<roll<<endl;
            cout<<"Grade:-"<<strcpy(grade,grade1)<<endl;
        }
        CSE21(int roll1,char name1[],char grade1[])
        {
            roll=roll1;
            strcpy(name,name1);
            strcpy(grade,grade1);
            cout<<"Student details are stored as:"<<endl;
            cout<<"Name:-"<<name<<endl;
            cout<<"Roll no:-"<<roll<<endl;
            cout<<"Grade:-"<<grade<<endl;
        }
};
int main()
{
    int roll;
    char name[50];
    char grade[100];
    CSE21 student1;
    cout<<"ENter the name of student:"<<endl;
    gets(name);
    cout<<"Enter the roll no of the student:"<<endl;
    cin>>roll;
    cout<<"Enter the grade of the student:"<<endl;
    getchar();
    gets(grade);
    int n=strlen(name);
    cout<<"n="<<n<<endl;
    CSE21 student2(roll,name,grade);


}
