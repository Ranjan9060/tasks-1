#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter  a First Number :");
    scanf("%d",&a);
    printf("Enter a Second Number :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf(" a=%d \n b=%d ",a,b);
    return 0;
}