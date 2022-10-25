#include<stdio.h>
void largest_num(int a[],int n);
int main()
{
    int a[100],n;
    printf("ENter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d  ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The array is :- [");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
    printf("]\n");
    largest_num(a,n);
    return 0;
}
void largest_num(int a[],int n)
{
    int l,h;
    l=a[0];
    printf("\n\nLargest number is:");
    for(int i=0;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
        else
        {
            h=a[i];
        }
    }
    printf("%d",l);
}