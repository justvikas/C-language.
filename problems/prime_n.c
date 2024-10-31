#include<stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter n value to get 1 to n prime numbers:\n");
	scanf("%d",&n);
	printf("prime numbers are:\t");
	for(i=2;i<=n;i++){
		count=0;
	for(j=2;j<i;j++){
		if(i%j==0){
			count=1;
			break;
		}
	}
	
	if(count==0)
		printf("%d\t",i);
    }
	return 0;
}
 