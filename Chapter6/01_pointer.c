#include<stdio.h>

int main()
{
    int i=72;
    int*j=&i; // i is a pointer pointing to i ( j is an integer pointer)
    int k=67;
    printf("The addres of i is %p\n",&i);
    printf("The addres of i is %p\n",j);
    printf("The addres of i is %p\n",&k);

    printf("The value at address j is %d\n",*(&i));
    return 0;
}