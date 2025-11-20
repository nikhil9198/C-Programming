#include<stdio.h>

int main()
{
    char i="A";
    char*j=&i; // i is a pointer pointing to i ( j is an integer pointer)
    
    float k=5.232;
    float*k1=&k;

    printf("The addres of i is %p\n",&i);
    printf("The addres of i is %p\n",j);
    printf("The addres of i is %p\n",&k);

    printf("The value at address j is %d\n",*(&i));
    return 0;
}