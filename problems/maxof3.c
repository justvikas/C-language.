#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the values a,b,c\n",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("all values are equal\n");
    }
    else if(a>b && a>c){
        printf("a is maximum with value %d\n",a);
    }
    else if(b>=a && b>c){
        printf("b is maximum with value %d\n",b);
    }
     else if(c>a && c>b){
        printf("c is maximum with value %d\n",c);
    }
} 
