//conditonal operator
//syntax (condition)?(true statement):(false statement);
#include<stdio.h>
int main(){
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	(num%2==0)?(printf("it is an even number%d",num)):(printf("it an odd number%d",num));
	return 0;
}