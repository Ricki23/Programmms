#include<iostream>
#include<cstring>
using namespace std;
class String 
{
    char *s;
    public:
    void getdata()
    {
        s=new char[50];
        cout<<"Enter the string:"<<endl;
        gets(s);
    }
    void operator + (String s1)
    {
        strcat(s,s1.s);
        cout<<"The concatenated string is:"<<endl;
        cout<<s;
    }
};
int main()
{
    String s1;
    s1.getdata();
    String s2;
    s2.getdata();
    String s3;
    s1+s2;
}