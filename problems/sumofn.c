#include<stdio.h>
void main()
{
  int n,i,s=0;
  printf("enter the n value for summation of the number:_");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    s=s+i;
  }
  printf("the sum of %d natural numbers is:-%d",n,s);

}
