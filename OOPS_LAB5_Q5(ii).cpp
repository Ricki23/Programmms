#include<iostream>
using namespace std;
class num1
{
    public:
    int n=10;
    void show()
    {
        cout<<"n ="<<n;
    }
};
int main()
{
    num1 p;
    int num1::*ptr=&num1::n;
    cout<<"\nThrough pointer:\n";
    p.*ptr=20;
    p.show();
}