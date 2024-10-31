#include<stdio.h>
//addition of matrix
void main(){
	int r1,c1,r2,c2,i,j;
	printf("Enter row and column for A matrix:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter row and column for B matrix:\n");
	scanf("%d%d",&r2,&c2);
	int ar[r1][c1],br[r2][c2],cr[r1][c1];
	if(r1==r2 && c1==c2)
	{
		printf("Enter element for A matrix :\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				scanf("%d",&ar[i][j]);
		}
		printf("Enter elements for B matrix :\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c1;j++)
				scanf("%d",&br[i][j]);
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				cr[i][j]=ar[i][j]+br[i][j];
		}
		printf("addtion of two matrices:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d\t",cr[i][j]);
			printf("\n");
		}
	
	}else{
		printf("matrix addition is not possible.\n");
	}
		
	
	
}