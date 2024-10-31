#include<stdio.h>
void main(){
    int a=10;
    int b=12;
    printf("the bitwise of %d AND %d is %d\n",a,b,a&b);
    printf("the bitwise of %d OR %d is %d \n",a,b,a|b);
    printf("the bitwise of %dXOR %d is %d \n",a,b,a^b);
    printf("the bitwise of %d ~ is %d \n",b,~b);
}