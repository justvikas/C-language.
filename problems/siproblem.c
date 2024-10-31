#include <stdio.h>
int main(){
    int p,t;
    float r,si;
    printf("Enter the value p,t,r:-");
    scanf("%d%d%f",&p,&t,&r);
    /*here the '&'(ampersand) before the variable in scanf() function is used as 'address of operator .its gives the location number used by the variable in memory*/
    // when we say &p ,we telling scanf() at which memory location should it store the value supplied by the user form the keyboard. 
    si= p*t*r/100;

    printf("the simple interest is:-%f ",si);
    return 0;
}
