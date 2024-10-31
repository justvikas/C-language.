/*if the marks obtained by a student in five different subjects are input through the keyboard,write  a program to find out the aggregate marks and percentage marks obtained by the student .Assuming that the maximum marks obtained by a student in each subject is 100*/


#include <stdio.h>
int main(){
    int tel,hin,eng,maths,phy,TotalMarks;
    float percentage;
    printf("enter the marks obtained by the student in each subject:-");
    scanf("%d%d%d%d%d",&tel,&hin,&eng,&maths,&phy);
    TotalMarks=tel+hin+eng+maths+phy;
    percentage=(TotalMarks / 500.0)*100;//spacing is importent
    printf("the aggregate Marks obtained by student\n%d\npercentage %.2f",TotalMarks,percentage);
    return 0;
}