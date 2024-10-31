#include <stdio.h>
void main() {
    int a,b,c;
    printf("enter the values of a,b,c:-");
    scanf("%d%d%d",&a,&b,&c);
    printf("a && b = %d\n", a>b && b>c);
    printf("a || b = %d\n", a>b || b>c);
    printf("a ! b = %d\n",  !(a>b && b>c) );
    // printf("a != b = %d\n", a != b);
    // printf("a >= b = %d\n", a >= b);
    // printf("a <= b %d\n", a<=b);
    // printf("-a = %d\n", -a);
    // printf("a++ = %d\n", a++);
    // printf("a-- = %d\n", a--);
}
