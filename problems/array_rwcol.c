#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    printf("enter the number of column:");
    scanf("%d",&col);
    int arr[row][col];
    printf("enter the elements:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix form is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }

}