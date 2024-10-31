#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    int max=a>b?(a>c?a:c):(b>c?b:c);
    int min=a<b?(a<c?a:c):(b<c?b:c);
    printf("max of given three is %d\n",max);
    printf("min of given three is %d\n",min);
    return 0;
}
