#include <stdio.h>
#include <math.h>
int main()
{
    int i, n=10, c, sum = 0;
    for (i = 1; i <= n; i++)
    {
        c = pow(i,3);
        printf("%d\t", c);
        sum = sum + c;
    }
    printf("The sum is %d",sum);
    return 0;
}