#include<stdio.h>
void main(){
    int a;
    printf("enter the value:_\n",a);
    scanf("%d",&a);
    if(a%2==0){
        printf("the given value %d is even\n",a);

    }
    else{
        printf("the given value %d is odd\n",a);
    }
}