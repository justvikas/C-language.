#include<stdio.h>
void main(){
    int size,i,sum=0;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+i;
    }printf("summation of the array elements is:%d\n",sum);
}