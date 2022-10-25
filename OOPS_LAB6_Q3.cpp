#include<iostream>
#include<string.h>
using namespace std;
class string_class
{
    string str;
    int length;
    public: 
        string_class(string str,int length)
        {
            cout<<"Parameterised constructor called"<<endl<<endl;
        }
        void string_class_join(string str,int length)
        {
            string s2,s3;
            cout<<"Inside member function"<<endl<<endl;
            cout<<"Enter the string with which you want to join"<<endl;
            cin>>s2;
            cout<<"The merged string is given by:"<<endl;
            s3=str.append(s2);
            cout<<s3;
        }
        string_class()
        {
            str="Hello";
            cout<<"Default constructor called:"<<endl;
            cout<<"By default the Hello will be displayed:"<<endl;
            cout<<str<<endl<<endl;
        }

};
int main()
{
    string_class s1;
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int length;
    length=str.length();
    string_class s2(str,length);
    s2.string_class_join(str,length);
}