#include<stdio.h>
int main(){
    int size,temp,j;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int ar[size];
    printf("enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    printf("the array elments are:");
    for(int i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }
    //logic for bubble sort.
    for(int i=0;i<size-1;i++){
        int flag=0;
        for(int j=0;j<size-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    printf("\nthe sorted elements:");
    for(int i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }
    return 0;
}