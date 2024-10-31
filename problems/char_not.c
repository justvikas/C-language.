#include<stdio.h>
void main()
{
    char ch;
    printf("enter the value to check whether the value is digit or character:-");
    scanf("%c",&ch);
    (ch>='0' && ch<='9')?(printf("it is a digit:_ %c",(int)ch)):(printf("it is a character :_%c",ch));
    // int isCharacter=(ch>'a' ||ch<'z') && (ch>'A' || ch<'Z');
    // int isDigit=ch>='0' && ch<='9';

    // printf("the enter value is charcter%c\n",isCharacter);
    // printf("the enter value is digit %c",isDigit);
}
