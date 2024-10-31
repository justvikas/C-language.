#include<stdio.h>
void main()
{
	int rows,j,i,k=1;
	printf("enter the number of rows:");
	scanf("%d",&rows);
//	printf("\n\n");
	for(i=1;i<=rows;i++)
	{	
		for(j=1;j<i;j++){
			printf("%d\t",k);
				k++;
			}
		printf("\n");	
		
	}
}