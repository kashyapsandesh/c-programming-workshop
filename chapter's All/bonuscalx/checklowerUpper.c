#include<stdio.h>

int main(){
char ascii;
printf("Enter a character");
scanf("%c",&ascii);
if(ascii>=97){
    printf("The entered valued is lowercase");
}else{
    printf("The entered value is uppercase");
}
return 0;
}