#include <stdio.h>

int main()
{
    // 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8
    // 5! = 1 x 2 x 3 x 4 x 5
    // n! = 1 x 2 x3 x4 x5 x6 .....xn
    // 0! = 1
    int i = 1;
    int product = 1;
    int n = 6;
    while (i <= n)
    {

        product *= i;
        i++;
    }
    printf("the factorial is %d\n", product);
    return 0;
}