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
    num1 n1;
    num1 *ptr;
    ptr=&n1;
    cout<<"Pointer to class:\n\n";
    cout<<"n= "<<ptr->n;
    cout<<"\nFunction calling thorugh pointer\n\n";
    ptr->show();
}
