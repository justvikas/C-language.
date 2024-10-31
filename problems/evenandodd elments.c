
#include<stdio.h>
void main()
{
	int i,size;
	printf("Enter row size :\n");
	scanf("%d",&size);
	int ar[size];
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&ar[i]);
//		sum=sum+ar[i];
	}
//	printf("even elements:\n");
	printf("Even element:\n");
	for(i=0;i<size;i++){
		if(ar[i]%2==0){
			printf("%d \t",ar[i]);
		}
	}
	printf("Odd elements:\n");
	for(i=0;i<size;i++){
		if(ar[i]%2!=0){
			printf("%d \t",ar[i]);
		}
	}
}

