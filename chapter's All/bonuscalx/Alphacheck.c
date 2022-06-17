#include<stdio.h>

int main(){
char c;
printf("Enter a character:\n");
scanf("%c",&c);
if ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"))
{
    printf("The entered character is alphabet");
}
else
{
    printf("The entered character is not alphabet");
}
return 0;
}