#include <stdio.h>

//function prototype 
int sum(int,int);

//function definition
int sum(int x,int y){
    //printf("The sum is %d\n",x+y);
    return x+y;
}
int main()
{
    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The result c is :%d\n", c);
    int c3=sum(a,b);//Function call
    printf("%d\n",c3); //Function call

    int a1 = 12;
    int b1 = 22;
    // int c1 = a1 + b1;
    // printf("The result c is :%d\n", c1);
    int c1=sum(a1,b1);//Function call
    printf("%d\n",c1);

    int a2 = 21;
    int b2 = 32;
    // int c2 = a2 + b2;
    // printf("The result c is :%d\n", c2);
    int c2=sum(a2,b2);//Function call
    printf("%d\n",c2);
    return 0;
}