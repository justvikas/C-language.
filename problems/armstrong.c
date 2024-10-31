//armstrong of a number
#include<stdio.h>
#include<math.h>
void main()
{
	int arm=0,t,rem,n,digit;
	int i=0,x;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	x=t=n;
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		i++;
	}
	printf("the no.of digit are %d\n",i);
	while(t>0){
		rem=t%10;
		arm=pow(rem,i)+arm;
		t=t/10;
	}printf("%d\n",arm);
	if(arm==x)
	{
		printf("it is an armstrong number:%d\n",arm);
	}
	else{
		printf("it is not an armstrong number:%d\n",arm);
	}
}
