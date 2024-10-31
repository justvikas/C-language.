#include<stdio.h>
void main(){
    int a;
    printf("enter the value to check wheather it positive or negative:_\n",a);
    scanf("%d",&a);
    if(a>=0){
        printf("the value %d is positive\n",a);
    }
    else{
        printf("the value %d is negative\n",a);
    }
}