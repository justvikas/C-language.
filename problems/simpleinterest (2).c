#include<stdio.h>
void main(){
    int si,p,t,r;
    printf("enter the value principle p,rate r,time t:-");
    scanf("%d%d%d",&p,&t,&r);
    si=p*t*r/100;
    printf("the simple interest is SI:-%d",si);

}