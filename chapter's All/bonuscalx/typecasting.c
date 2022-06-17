#include<stdio.h>

int main(){
int a;
char ch;
printf("Enter a ascii code");
scanf("%d",&a);
ch=(char)a;//explict type conversion
printf("%c",ch);
return 0;
}