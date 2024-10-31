#include<stdio.h>
void main(){
    int a,b;
    printf("enter the values of a:\n");
    scanf("%d",&a);
    printf("enter the values of b:\n");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    // a=a-b+a+b+b-a
    printf("a:%d and b:%d",a,b);
}