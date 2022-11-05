#include<iostream>
using namespace std;
template <typename T> T insert_arr(T a[],int n)
{
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return 0;
}
template <typename T> T search_arr(T a[],T p,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            flag++;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag!=0)
    {
        cout<<"Element is found:"<<endl;
    }
    else
    {
        cout<<"Element is not found:"<<endl;
    }
    return 0;
}
int main()
{
    int a[100];
    int n,p;
    cout<<"ENter the number of elements:"<<endl;
    cin>>n;
    insert_arr<int>(a,n);
    cout<<"Enter the elements you want to search"<<endl;
    cin>>p;
    search_arr<int>(a,p,n);
}