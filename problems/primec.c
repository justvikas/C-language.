#include<stdio.h>
void main(){
    int n,flag=1,i;
    printf("Enter is n value:_");
    scanf("%d",&n);
    for(i=2;i<n;i++){//removed one and itself.
        if(n%i==0){
            flag=0;//if the n value is factor of 2 then it is not a prime'
        }
    }
    if(flag==1){
        printf("it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }

}
