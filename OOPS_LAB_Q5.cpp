#include<iostream>
using namespace std;
class complex
{
    int real;
    int image;
    public:
    void gets()
    {
        int r1,im;
        cout<<"Enter the imaginary part of the number:"<<endl;
        cin>>r1;
        cout<<"ENter the real part of the number:"<<endl;
        cin>>im;
        real=r1;
        image=im;
    }
    void display()
    {
        cout<<"The complex number is:"<<endl;
        cout<<real<<" + i "<<image<<endl;
    }
    complex operator + (complex c1)
    {
        complex t1;
        t1.real=real+c1.real;
        t1.image=image+c1.image;
        cout<<"Sum of two complex numbers are:"<<t1.real<<" + i "<<t1.image<<endl;
        return t1;
    }
    complex operator ++(int n)
    {
        ++image;
        ++real;
    }
    complex operator ++()
    {
        image++;
        real++;
    }
};
int main()
{
    complex c1;
    c1.gets();
    c1.display();
    complex c2;
    c2.gets();
    c2.display();
    complex c3;
    c3=c1+c2;
    ++c3;
    c3.display();
    c2++;
    c2.display();
}