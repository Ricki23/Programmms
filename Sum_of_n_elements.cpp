#include<iostream>
using namespace std;
void sum_array();
void sum_elements();
int main()
{
    int option;
    do
    {
        cout<<"\n\n1.Sum of n elements of an array:"<<endl<<endl;
        cout<<"\n\n2.Sum of n numbers:"<<endl<<endl;
        cout<<"\n\n3.Exit"<<endl<<endl;
        cout<<"Enter your option"<<endl;
        cin>>option;
        switch(option)
        {
            case 1:
                sum_array();
                break;
            case 2:
                sum_elements();
                break;
        }
    } while (option!=3);
}
void sum_array()
{
    int a[100],n,m;
    cout<<"ENter the number of elements of the array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"\n\nThe array is:\n\n";
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ,";
    }
    cout<<"]\n\n";
    int sum=0;
    cout<<"ENter the range of numbers you want to add(should not exceed size of array):";
    cin>>m;
    if(m>n)
    {
        cout<<"\n\nInvalid input\n\n";
    }
    if(m<=n)
    {
        for(int i=0;i<m;i++)
        {
            sum=sum+a[i];
        }
    }
    cout<<"Sum of n elements of the array is:-"<<endl;
    cout<<sum<<endl;
}
void sum_elements()
{
    int sum=0,n;
    cout<<"ENter the last limit for adding numbers:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of n numbers is:-"<<endl;
    cout<<sum<<endl;
}