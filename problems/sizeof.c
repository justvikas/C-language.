#include<stdio.h>
void main(){
    short int a;
    int b=12;
    unsigned v;
    float c=14.7;
    char d;
    double e;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    printf("%d\n",sizeof(v));
    /*When used with an expression, sizeof returns the size of the expression.*/
    // printf("the sizeof b+c :-%d\n",sizeof(a+b));//a is "short int" and b is "int" then the result is "int" only which is 4

}
