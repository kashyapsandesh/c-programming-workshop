#include <stdio.h>

int main()
{
    int i, j, space=2;
    for (i = 1; i <= 5; i++)
    {
        for(j=0;j<=space;j++){
            printf("\t");
        }
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
        space--;
    }
    return 0;
}

// fibonacci
int fibonacci()
{
    int a = 1, b = 1, i, c, n = 5;
    printf("%d\t%d\t", a, b);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }

    return 0;
}