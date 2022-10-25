#include<iostream>
using namespace std;
void merge(int a[],int b[],int n,int m);
int main()
{
    int n,a[100],b[100],m;
    cout<<"Enter the number of elements for the first array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element  "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"Enter the number of elements for the second array:";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"Enter the element  "<<i+1<<endl;
        cin>>b[i];
    }
    cout<<"\n\nThe first array is\n\n[";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ,";
    }
    cout<<"]";
    cout<<"\n\nThe second array is\n\n[";
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ,";
    }
    cout<<"]";
    merge(a,b,n,m);
    return 0;
}
void merge(int a[],int b[],int n,int m)
{
    for(int i=0;i<m;i++)
    {
        a[n+i]=b[i];
    }
    cout<<"\n\nThe array after merging both of them is given by :"<<endl<<endl;
    cout<<"[";
    for(int i=0;i<m+n;i++)
    {
        cout<<a[i]<<" ,";
    }
    cout<<"]";
}