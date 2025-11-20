#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a+b;
}
int main()
{
    int x=1, y=8;
    printf("The sum of 1 and 8 is %d\n",sum(1,8));
    return 0;
}