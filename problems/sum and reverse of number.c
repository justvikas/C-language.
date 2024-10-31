#include<stdio.h>
void main(){
	int n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	
	}printf("the sum of the numbers is:%d\n",sum);
    for(int j=n;j>=1;j--){
        printf("Reverse of the number is%d\t",j);
    }
}