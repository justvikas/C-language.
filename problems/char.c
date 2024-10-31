 #include<stdio.h>
void main(){
    char ch;
    printf("enter any character:-\n");
    scanf(" %c",&ch);
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a vowel",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is a consonant",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf(" %c its a number ",ch);

    }
    else{
        printf("%c is a number or special character",ch);
    }
}