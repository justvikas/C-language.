#include<stdio.h>
void main()
{
    int n,rows,i;
    printf("enter the N value table:-");
    scanf("%d",&n);
    printf("enter the No.Of Rows value:-");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        printf("%d X %d =%d\n",n,i,n*i);
    }

}
