#include<stdio.h>
void main(){
    int size,temp,j,i;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int ar[size];
    printf("enter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("the array elments are:");
    for(i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }
    //logic
    for(i=0;i<size;i++){
        temp=ar[i];
        j=i-1;
        while (j>=0 && ar[j]>temp){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
    printf("\nthe sorted elements:");
    for(i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }
}
