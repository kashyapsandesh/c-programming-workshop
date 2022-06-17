#include <stdio.h>

int main()
{
    int roll;
    char name[100];
    printf("Enter your name");
    gets(name);
    puts(name);
    printf("Enter your roll no");
    gets(roll);
    puts(roll);

    if (roll % 2 == 0)
    {
        printf("%s", name);
    }

    return 0;
}