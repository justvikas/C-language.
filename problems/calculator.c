#include <stdio.h>
// #include<string.h>  
void main()
{
    int a, b;
    char ch;
    float div;
    printf("enter the value of a,b:-\n");
    scanf("%d%d",&a,&b);
    printf("enter for addition '+' , subtraction '-',multiplication '*', division '/', modulus'%%'\n");
    scanf(" %c", &ch);//it will also consume whitespace characters
    switch (ch)
    {
    case '+':
        printf("summation is :-%d", a + b);
        break;
    case '-':
        printf("subtraction is:%d", a - b);
        break;
    case '*':
        printf("multiplication is:%d", a * b);
        break;
    case '/':
        if(b!=0){
            div = (float)a / b;
            printf("division is: %.2f", div);
        }
        else{
            printf("infinity!!");

        }
        break;
    case '%':
        printf(" modulus or reminder :%d", a % b);
        break;

    default:
        printf("Enter the valid operatior:\n");
        break;
    }
}
