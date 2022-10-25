#include<iostream>
using namespace std;
void even_array(int a[],int n);
void odd_array(int a[],int n);
int main()
{
    int option,a[100],n;
    cout<<"Enter the number of elements of your array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"The array is "<<endl;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ,";
    }
    cout<<"]";
    cout<<endl<<endl;
    do
    {
        cout<<"\n1.Even Numbers of an array:"<<endl<<endl;
        cout<<"2.Odd numbers of an array"<<endl<<endl;
        cout<<"3.Exit"<<endl<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:

                even_array(a,n);
                break;
            case 2:

                odd_array(a,n);
                break;
        }
    } while (option!=3);
}
void even_array(int a[],int n)
{
    int flag=0;
    cout<<"The even number of the array are\n\n";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ,";
        }
        else
        {
            flag=1;
        }
    }
    cout<<"]\n\n";
}
void odd_array(int a[],int n)
{
    int flag=0;
    cout<<"The odd numbers of the array are\n\n";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ,";
        }
        else
        {
            flag=1;
        }
    }
    cout<<"]"<<endl<<endl;
}