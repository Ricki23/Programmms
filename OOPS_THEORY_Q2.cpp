#include<iostream>
using namespace std;
class binary
{
    public:
        string binary_num;
        int binary_num2[100];
        int binary1;
        binary()
        {
            cout<<"Enter the binary number:";
            cin>>binary_num;
        }
        friend int add_binary(binary b1,binary b2);   
        friend void subtract_binary(int n, int a[], int b[]);
};
int add_binary(binary b1,binary b2)
{
    string bin1=b1.binary_num;
    string bin2=b2.binary_num;
    int len, carry, re, i;
    string addRes;
    len = bin1.size();
    addRes = "";
    carry = 0;
    for(i=(len-1); i>-1; i--)
    {
        re = carry;
        if(bin1[i] == '1')

            re = re+1;
        else

            re = re+0;
        if(bin2[i] == '1')

            re = re+1;
        else

            re = re+0;
        if(re%2==1)

            addRes = '1' + addRes;
        else

            addRes = '0' + addRes;
        if(re<2)

            carry = 0;
        else

            carry = 1;
    }
   if(carry!=0)
   {
      addRes = '1' + addRes;
   }
   cout<<"\nAddition Result = "<<addRes;
   return 0;
}
void Subtract(int n, int a[], int b[])
{

	for(int i = 0; i < n; i++)
	{
		

		if(b[i] == 1)
		{
			b[i] = 0;
		}
	

		else
		{
			b[i] = 1;
		}
	}


	for(int i = n - 1; i >= 0; i--)
	{					
		if(b[i] == 0)
		{
			b[i] = 1;
			break;
		}
		else
		{
			b[i] = 0;
		}
	}


	int t = 0;						
	for(int i = n - 1; i >= 0; i--)
	{
		

		a[i] = a[i] + b[i] + t;
	

		if(a[i] == 2)
		{
			a[i] = 0;
			t = 1;

		}
	

		else if(a[i] == 3)
		{
			a[i] = 1;
			t = 1;
		}
		else
			t = 0;
	}

	cout << endl;
	

	if(t==1)
	{	
	

	for(int i = 0; i < n; i++)
	{
			

		cout<<a[i];	
	}
	}


	else				
	{				
		

		for(int i = 0; i < n; i++)
		{				
			if(a[i] == 1)
				a[i] = 0;
			else
				a[i] = 1;
		}
		for(int i = n - 1; i >= 0; i--)
		{
			if(a[i] == 0)
			{
				a[i] = 1;
				break;
			}
		else
			a[i] = 0;
		}
	

		cout << "-";		
	

		for(int i = 0; i < n; i++)
		{
			cout << a[i];
		}
	}
}
int binaryproduct(int binary1, int binary2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}


int main()
{
    int n;
    binary b1;
    binary b2;
    add_binary(b1,b2);
    cout<<"\n\nEnter the number of terms of binary:";
    cin>>n;
    cout<<"Enter the binary number 1(one by one):";
    for(int i=0;i<n;i++)
    {
        cin>>b1.binary_num2[i];
    }
    cout<<"Enter the binary number 2(one by one):";
    for(int i=0;i<n;i++)
    {
        cin>>b2.binary_num2[i];
    }
    cout<<"Subtraction of the two binary number gives:"<<endl;
    Subtract(n,b1.binary_num2,b2.binary_num2);
    cout<<endl<<endl;
    int multiply = 0;
    int digit, factor = 1;
 
    cout<<"Enter the first binary number:";
    cin>>b1.binary1;
    cout<<"Enter the second binary number:";
    cin>>b2.binary1;
    while (b2.binary1 != 0)
    {
        digit =  b1.binary1 % 10;
        if (digit == 1)
        {
            b1.binary1 = b1.binary1 * factor;
            multiply = binaryproduct(b1.binary1, multiply);
        }
        else
        {
            b1.binary1 = b1.binary1 * factor;
        }
        b2.binary1 = b2.binary1 / 10;
        factor = 10;
    }
    cout<<"Product of two binary numbers:"<<multiply;
    return 0;
}
