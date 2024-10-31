/*ramesh basic salary is input through the keyboard .his dearness allowance is 40% of basic salary. and house rent allowance is 20% of basic salary. Write a program to calculate  his gross salary in C*/

#include<stdio.h>
int main(){
    int basicSalary;
    float a,b,c,grossSalary;
    printf("Enter the value of Basic Salary: ",basicSalary);
    scanf("%d",&basicSalary);
    a=basicSalary*0.4;/*dearness allowance is 40%*/
    b=basicSalary*0.2;/*house rent allownace is  20%*/
    c=a+b;
    grossSalary=basicSalary-c;
    printf("grossSalary %.2f",grossSalary);
    /*here %0.2f means upto two decimal value of grosssalary*/
    return 0;

}