#include<iostream>
using namespace std;
void reverse_num(int n);
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    reverse_num(n);
    return 0;
}
void reverse_num(int n)
{
    int rev=0,rem;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<"Reverse of the number is:"<<endl;
    cout<<rev;
}