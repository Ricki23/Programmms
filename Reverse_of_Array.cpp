#include<iostream>
using namespace std;
void reverse_array(int a[],int n);
int main()
{
    int n,a[100];
    cout<<"Enter the number of terms:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"The array is:"<<endl;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
         cout<<a[i]<<" ,";
    }
    cout<<"]\n";
    reverse_array(a,n);
    return 0;
}
void reverse_array(int a[],int n)
{
    int num1,num2;
    int temp;
    for (int i = 0, j = n - 1; i < n/2; i++, j--)  
    {     
        temp = a[i];  
        a[i] = a[j];  
        a[j] = temp;  
    }
    cout<<"The reversed array is:"<<endl;
    cout<<"[";
    for(int i=0;i<n;i++)
    {
         cout<<a[i]<<" ,";
    }
    cout<<"]\n";

}