#include<stdio.h>
void main(){
    int intvalue=147;
    float floatvalue;

    //autoconversion int to float
    floatvalue =intvalue;
    printf("the autoconversion of int to float is\n");
    printf("%d\n",intvalue);
    printf("%.2f\n",floatvalue);
   //casting conversion from float to int
   intvalue=(int)floatvalue;
   printf("the casting of float to int is :%d\n",intvalue);

}