#include<stdio.h>
void main(){
    int marks;
    printf("enter the marks you have obtained\n");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
    printf("Excellent \n");
    }
    else if(marks>=80 && marks<90){
        printf("A \n");
    }
     
    else if(marks>=70 && marks<80){
        printf("B \n");
    }
 
    else if(marks>=60 && marks<70){
        printf(" C \n");
    }
 
    else if(marks>=50 && marks<60){
        printf("D \n");
    }
    else if(marks>=50 && marks<60){
        printf("fail \n");
    }
    else{
        printf("enter bw 1 to 100 \n");

    }



}

