#include <stdio.h>
/*stdio.h is defined as standered input and output library in C programming language and h for header*/
int main()
/*main( ) is a funtion. a function is a set of statement that performs a specific task. int main() is integer function used to return a value 0 in return statement that mains the program is executed successfully */
{
    int p,t;/*declaration of variable is must and should before a program*/
    float si,r;/*declaration*/

    t=3;/*assiging value to variable*/
    p=1000;
    r=8.5; 
    /*formula for simple interest*/
    si = p*t*r/100; /*usage*/
    /*si is simple interest
    p is the initial loan amount
    t time duration in years
    r rate of interest expressed in pecentage*/

    printf("%f\n",si);
    // printf("<format string>","<list of variables>")
    // %f for real values , %d for integer values , %c for character values.
    printf("simple interest in Rs. %f \n principal is :- %d\n time of duration in year :- %d",si,p,t);
    /*all outputs to screen is achieved using readymade library rml funtion one is printf*/
    return 0;

}
