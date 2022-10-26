#include<iostream>
#define MAX 5
using namespace std;
class lab
{
    int a[5];
    public:
    friend istream & operator >>(istream &input,lab &l2)
    {

        for(int i=0;i<5;i++)
        {
            input>>l2.a[i];
            return input;
        }
    }
    friend ostream & operator << (ostream &output,lab &l1)
    {
        for(int i=0;i<5;i++)
        {
            output<<l1.a[i]<<"\t";
            return output;
        }
    }

};
int main()
{
    lab l1;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>l1;
    }
    cout<<"The array is given by:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<l1;
    }
}