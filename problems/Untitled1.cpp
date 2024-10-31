/*the distance between two cities in km,is input through the keyboard .write a program to to convert and print this distance in meters,feet,inches,and centimeters*/

#include<stdio.h>
int main(){
    
    float dis,cm,meter,feet,inches;
    printf("enter the distance between two cities in Km:_",dis);
    scanf("%f",&dis);
    //converting.
    cm=dis*100000;
    inches=dis*39370.1;//1km=39370.1 inches
    feet=dis*3280;
    meter=dis*1000;
    printf("In centimeters=%.2f \nIn inches=%.2f \nIn feet %.2f \nIn meters%.2f",cm,inches,feet,meter);
    return 0;
}
