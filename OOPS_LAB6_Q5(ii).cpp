#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
    char * s;
public:

     A()
     {
         cout << "Default constructor called!";
     }
     A(char * x)
     {
         cout << "Parametrized Constructor called!\n";
         int l = strlen(x),i;
         s = new char[l+1];
         for(i=0;i<l;i++)
            s[i] = x[i];
         s[l] = '\0';
     }
     A(const A & old )
     {
         int l = strlen(old.s),i;
         s = new char[l+1];   
         for(i=0;i<l;i++) // deep copy
         {   
            s[i] = old.s[i];
         }
         s[l]= '\0';

         cout << "Copy Constructor called!\n";
     }

     void print()
     {
         cout << s << "\n";
     }

};

int main()
{
      A obj("codecode"); 
      A obj2(obj); 
      obj2.print();

    return 0;
}