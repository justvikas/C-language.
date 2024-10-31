#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2,det;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    det= b*b-4*a*c;
    if(det>=0){
        root1=-b/2*a;
        root2=sqrt(det)/2*a;
        if(det==0){
            printf("roots are real and equal %.2f and %.2f ",root1,root1);
        }
        else{
            float r1=root1+root2;
            float r2=root1-root2;
            printf("roots are real and distint %.2f and %.2f ",r1,r2);

        }

    }
    else{
        root1=-b/2*a;
        root2=sqrt(-1*det)/2*a;
        printf("the roots are imaginary %.1f+i%.1f and %.1f-i%.1f\n",root1,root2,root1,root2);
    }
    
}
