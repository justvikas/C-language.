#include<stdio.h>
int main(){
    float fahrenheit;
    float celcius1;
    float celcius;
    printf("Temperature of city in fahrenheit:_\n");
    scanf("%f",&fahrenheit);
    celcius1 = fahrenheit-32;
    celcius=celcius1*5/9;

    printf("Temperature into centigrade degrees:_%.2f",celcius);
    return 0;
}