#include<stdio.h>
void main()
{
    int month;
    printf("Enter 1 for january ,2 for febraury ,3 for march ,4 for april, 5 for may ,6 for june,7 for july, 8 for august , 9 for september ,10 for october,11 for november, 12 for december\n");
    scanf("%d",&month);
    if(month==1 || month==3 ||  month==5 ||  month==6 ||  month==8 ||  month==10 ||  month==12){
        printf("it has 31 days!!");
    }
    else if( month==4 ||  month==6 ||  month==8 ||  month==10 || month==12){
        printf("it has 30 days!!");
    }
    else{
        printf("it has 28 days!!");
    }
}