#include<iostream>
#include<strings.h>
#include<cstring>
using namespace std;
class A
{
    public:
    char string[100];

    void getdata()
    {
        cout<<"Enter the String :"<<endl;
        gets(string);
    }
    void operator ==(A a1)
    {
        strcat(a1.string,string);
        cout<<a1.string<<endl<<endl;
    }
};
int main()
{
    A a1;
    a1.getdata();
    A a2;
    a2.getdata();
    a2==a1;
}