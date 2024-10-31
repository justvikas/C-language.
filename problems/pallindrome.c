#include<stdio.h>
void main()
{
    int n,s=0,rem,temp;
    printf("enter the n value:\n");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;

    }
    printf("the reverse of the number is:_%d\n",s);
    if(s==temp){
        printf("it is a pallindrome:-%d\n",temp);
    } 
    else{
        printf("it is not a pallindrome:_%d\n",temp);
    }
    
}
