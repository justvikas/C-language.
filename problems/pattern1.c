#include<stdio.h>
void main(){
	int rows,j,i;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	printf("\n\n");
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("%d  ",j);
		printf("\n");
		}
	}
	
}