#include<iostream>
#include<string.h>
using namespace std;
class num1
{
    int x;
};
class num2
{
    string y;
};
class num3
{
    float z;
};
int main()
{
    double a,b,c;
    num1 x;
    num2 y;
    num3 z;
    a=sizeof(x);
    b=sizeof(y);
    c=sizeof(z);
    if(a>b && a>c)
    {
        cout<<"First class is the largest";
    }
    if(a<b && b>c)
    {
        cout<<"Second class is the largest";
    }
    if(b<c && c>a)
    {
        cout<<"Third group is the largest";
    }
    return 0;
}