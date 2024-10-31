#include<stdio.h>
void main(){
    int a=10;
    int b=10;
    a++; // post increment 11
    b--; // post decrement 9
    /*Post-increment uses the value and then increments it*/
    printf("%d\n",a);
    printf("%d\n",b);
    ++a; //pre increment 12
    --b;// pre decrement 8
    /*Pre-increment increments the value before using it*/
    printf("%d\n",a);//12    
    printf("%d\n",b);//8    
    printf("%d\n",a++);// 12 will be the output and a value will increase by 1 that is 13
    printf("%d\n",b--);// 8 will be the output and a value will decrease by 1 that is 7

    printf("%d\n",a); //13    
    printf("%d\n",b); //7    

    printf("%d\n",++a);// 14 will be the increment.
    printf("%d\n",--b);// 6


    printf("%d\n",a);//14
    printf("%d\n",b);// 6

    int d=0;
    printf("%d logical not %d\n",!d);
    
}