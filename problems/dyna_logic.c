#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    printf(" a is greater then b\t:-%d\n",a>b);
    printf(" a is lessthen then b\t:-%d\n",a<b);
    printf(" a is Greaterthenequal b\t:-%d\n",a>=b);
    printf(" a is LessthenEqualto then b\t:-%d\n",a<=b);
    printf(" a is NotEqualto then b\t:-%d\n",a!=b);
    printf(" a is Equal to then b \t:-%d\n",a==b);
    // printf(" a is greater then b",a==b);
    return 0;
}