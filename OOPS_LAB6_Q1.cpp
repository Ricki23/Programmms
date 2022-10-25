#include<iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    public:
        complex()
        {
            real=0;
            imaginary=0;
            cout<<"Default constuctor being called:"<<endl;
            cout<<"By default the values are stored as"<<endl;
            cout<<real<<"+"<<imaginary<<"i"<<endl<<endl;
        }
        complex(int real,int imaginary)
        {
            cout<<"The imaginary number is given by:"<<endl;
            cout<<real<<"+"<<imaginary<<"i"<<endl<<endl;
        }
        ~complex()
        {
            cout<<"Destructor being called"<<endl;
        }
};
int main()
{
    complex c1;
    int real,imaginary;
    cout<<"Enter the real part:";
    cin>>real;
    cout<<"Enter the imaginary part:";
    cin>>imaginary;
    complex c2(real,imaginary);
}