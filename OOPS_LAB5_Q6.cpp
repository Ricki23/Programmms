#include<iostream>
#include<string.h>
using namespace std;
class count
{
    int x;
    int y;
    public:
        void getdata()
        {
            int c=0;
            cout<<"Enter the value of X:";
            cin>>x;
            cout<<"Enter the value of Y:";
            cin>>y;
            c++;
            cout<<"Number of times function was called is:"<<c<<endl;
        }
        void showdata()
        {
            int count=0;
            cout<<"Value of x:"<<x<<endl;
            cout<<"Value of y:"<<y<<endl;
            count++;
            cout<<"Number of times function was called is:"<<count<<endl;
        }
};
int main()
{
    count c1;
    count c2;
    c1.getdata();
    c1.showdata();
    c1.getdata();
    c1.showdata();
}