#include<stdio.h>
void main()
{
    int e_sum,o_sum,i,n;
    e_sum=0;
    o_sum=0;
    printf("enter the value of n:_");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {if(i%2==0){
            e_sum=e_sum+i;
        }
        else{
            o_sum=o_sum+i;
        }
    }
    printf("sum of even numbers is %d\n",e_sum);
    printf("sum of odd numbers is numbers is %d\n",o_sum);
    
}