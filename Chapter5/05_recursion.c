#include<stdio.h>

int factorial(int);
//Factorial(5)=1X2X3X4X5
//Factorial(4)=1X2X3X4
//Factorial(3)=1X2X3
//Factorial(n)=1X2X3X......Xn-1Xn
//Factorial(n)=1X2X3X......Xn
int factorial(int n){
    if(n==1 || n==0){ // Base condition
        return 1;
    }

    return factorial(n-1)*n;
}
int main()
{
    int a=5;
    printf("The factorial of %d is %d\n",a,factorial(a));
    return 0;
}