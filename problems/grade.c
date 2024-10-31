#include<stdio.h>
void main()
{ 
    float marks;
    printf("enter the percentage obtained by student marks:-");
    scanf("%f",&marks);
    if(marks<=40){
        printf("fail\n");
    }
    else if(marks>40  && marks<=60){
        printf("second class");
    }
    else if(marks>60  && marks<=70){
        printf("first class");
    }
   else if(marks>70  && marks<=100){
        printf("execellent class");
    }
   else{
    printf("please enter the the value between 1-100%%");
   }

}