#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void rev(string s);
int main()
{
    string s;
    int len;
    cout<<"ENter the string:";
    cin>>s;
    rev(s);
    return 0;
}
void rev(string s)
{
    int len,temp;
    len=s.length();
    for(int i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
    cout<<"The reversed string is\n"<<s;
}