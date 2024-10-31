#include<stdio.h>
#include<math.h>
void main(){
    int s,rem,n;
    for(n=1;n<=255;n++){
        int p=1;
        int i=n;
        s=0;
       while (i!=0){
        rem=i%2;
        s=s+(rem*p);
        p=p*10;
        i=i/2;
       }printf("%d\n",s);
    }
}
