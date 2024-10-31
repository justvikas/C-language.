#include<stdio.h>
void main(){
	int arr[5]={1,23,43,56,43};
	int i;
	for(i=0;i<5;i++){
		printf("%d \t",arr[i]);	
	}
		int i,size;
	printf("enter array size:\n");
	scanf("%d",&size);
	int arr[size];
	printf("enter elements of array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("arr[%d] :element %d\n",i,arr[i]);
	}
		
	
}