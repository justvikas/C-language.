#include<stdio.h>
void main(){
	int n,i,count=0,j;
	printf("Enter n value to get 1 to n prime numbers\n");
	scanf("%d",&n);
	// printf("prime numbers:");
	for(i=1;i<=n;i++){
		count=0;
	}
	for(j=2;j<i;j++){
		if(i%j==0){
			count=1;		
			break;
		}
	}
	if(count==0){
		printf("%d\t",i);
	}
}