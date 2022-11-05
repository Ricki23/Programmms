#include <iostream>
using namespace std;
void Function()
{
   try
   {
       throw "hello";
   }
   catch (const char*)
   {
        cout<<"\nCaught exception inside Function\n";
        throw; 
   }
}
int main()
{
   cout<< "Main start";
   try
   {
       Function();
   }
   catch(const char*)
   {
      cout <<"\nCaught exception inside Main\n";
   }
   cout << "Main end";
   return 0;
}