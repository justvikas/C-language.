#include<stdio.h>
int main()
{
	int a,b,c; 
	float div;
	//arthematic operators.
	printf("For arthematic operators");
	printf("enter the values of a,b\n");
	scanf("%d%d",&a,&b);
	printf("the sum of the number is%d\n",c=a+b);
	printf("the multiplication of the number is%d\n",c=a*b);
	printf("the division of the number is%.2f\n",div=(float)a/b);
	printf("the subtraction of the number is%d\n",c=a-b);
	printf("the reminder of the number is%d\n",c=a%b);
	//relational operator.
	printf("For relational operators");
	printf(" the a>b is:\t%d\n",a>b);
	printf(" the a<b is:\t%d\n",a<b);
	printf(" the a>=b is:\t%d\n",a>=b);
	printf(" the a<=b is:\t%d\n",a<=b);
	printf(" the a==b is:\t%d\n",a==b);
	printf(" the a!=b is:\t%d\n",a!=b);
	//assignment operator.
	printf("For assignment operators");
	printf(" the a+=b is:\t%d\n",a+=b);
	printf(" the a-=b is:\t%d\n",a-=b);
	printf(" the a*=b is:\t%d\n",a*=b);
	printf(" the a/=b is:\t%d\n",a/=b);
	printf(" the a%%=b is:\t%d\n",a%=b);
	//Bitwise operators.
	int d,e;
	printf("For bitwise operators\n");
	printf("Enter d and e values, '1' for true and false for '0' \n");
	scanf("%d%d",&d,&e);
	printf(" the d AND e is:\t%d\n",d|e);
	printf(" the d OR e is:\t%d\n",d&e);
	printf(" the NOT(d AND e) is:\t%d\n",!(d&e));
	printf(" the NOT(d OR e) is:\t%d\n",!(d|e));
	//logical operators.
	int i,h,g;
	printf("For logical operators");
    printf("enter the values of i,h,g:-");
    scanf("%d%d%d",&i,&h,&g);
    printf("i && h = %d\n",(i>h && h>g));
    printf("i || h = %d\n", (i>h || h>g));
    printf("i ! h = %d\n",  !(i>h && h>g));
	// unary operators
	int value=1;
	printf("For Unary operators");
    printf("enter the any  values :-\n");
	printf("the pre increment value is %d\n",++value);
	printf("the post increment value is %d\n",value++);
	printf("the pre decrement value is %d\n",--value);
	printf("the post decrement value is %d\n",value--);
	//shift operator.
	printf("the left shift of 4 is :-%d\n",4<<2);
    printf("the right shift of 4 is :-%d\n",4>>2);
	//sizeof operator.
	short int r;
    int s;
    unsigned v;
    float m;
    char n;
    double o;
    printf("%d\n",sizeof(r));
    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(v));
    printf("%d\n",sizeof(m));
    printf("%d\n",sizeof(n));
    printf("%d\n",sizeof(o));
	return 0;
}
