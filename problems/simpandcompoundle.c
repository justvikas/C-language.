#include<stdio.h>
#include<math.h>
int main(){
	float p,t,r;
	printf("enter the value of principle p, time t,rate r\n");
	scanf("%f%f%f",&p,&t,&r);
	float si=(p*t*r)/100;
	float ci=p*(pow((1+r/100),t)-1);
//	when we use pow() function the we need to declare the predefined #include<math.h>
/* we can also use abs(),sqrt(),sub() funcions*/
	printf("si is %.2f\n",si);
	printf("ci is %.2f\n",ci);
	return 0;
}
