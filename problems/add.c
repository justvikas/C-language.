// #include<stdio.h>
// void main(){
//     int a,b;
//     a=10;
//     b=10;
//     printf("%d",a+b); // 20
    
// }
#include<stdio.h>
void main(){
	int rows,n,i=1;
	printf("the no.of rows value\n");
	scanf("%d",&rows);
	printf("which table you want\n");
	scanf("%d",&n);
	for(i=1;i<=rows;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
	
}
