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
	}
	int min=ar[0],max=ar[0];
	for(i=0;i<size;i++){
		if(min>ar[i]){
			min =ar[i];
		}
		else if(max<ar[i]){
			max=ar[i];
		}
	}
	printf("the maximum is %d \n the minimum is %d",min,max);
}