#include<stdio.h>
void main()
{
    int  n,s=0;
    printf("Enter the value of n:-");
    scanf("%d",&n);
    while(n>0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    printf("the reverse of number is:-%d",s);
}
 