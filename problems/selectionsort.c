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
    //logic for selection sort.
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(ar[j]<ar[min]){
                min=j;
            }
        }
        if(min!=i){
           // swap(ar[i],ar[min]);
           temp=ar[i];
           ar[i]=ar[min];
           ar[min]=temp;
        }
        printf("\npass:%d\n",i+1);
        for(int i=0;i<size;i++){
            printf("%d\t",ar[i]);
        }
    }
    printf("\nthe sorted elements:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",ar[i]);
    }
    return 0;
}