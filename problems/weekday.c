#include<stdio.h>
void main(){
    int num;
    printf("enter \n'0' for sunday,\n'1' for monday,\n'2' for tuesday,\n'3' for wednesday,\n'4' for thusday,\n'5' for friday,\n'6' for saturday\n");
    scanf("%d",&num);
    switch(num){
        case 0:
            printf("sunday!!");
            break;
        case 1:
            printf("Monday!!");
            break;
        case 2:
            printf("Tusday!!");
            break;
        case 3:
            printf("wednesday!!");
            break;
        case 4:
            printf("Thusday!!");
            break;
        case 5:
            printf("friday!!");
            break;
        case 6:
            printf("saturday!!");
            break;
        
        default:
            printf("enter a valid number\n");
            break;
        

    }
}