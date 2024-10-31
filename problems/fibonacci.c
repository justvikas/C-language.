#include<stdio.h>
void main(){
    int s=0,i,n,a=0,b=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("Fibonacci sequence:");
    for(i=1;i<=n;i++){
        printf("%d\t",a);
        s=a+b;
        a=b;
        b=s;
    }
}