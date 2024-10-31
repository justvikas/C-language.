#include<stdio.h>
struct test
{
    int x;
    char arr[9];
    int y;
};
int main(){
    printf("size:%d",sizeof(struct test));
}
