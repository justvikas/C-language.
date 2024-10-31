#include<stdio.h>
void main()
{
    int n1,n2;
    printf("enter the value of n1,n2:\n");
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        printf("%d is maximum\n",n1);
        printf("%d is minimum\n",n2);

    }
    else if(n2>n1){
        printf("%d is maximum\n ",n2);
        printf("%d is minimum\n ",n1);
    }
    else{
        printf("%d and %d are equal\n",n1,n2);
    }
}