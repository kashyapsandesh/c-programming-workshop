#include<stdio.h>

int main(){
    int num1;
printf("Enter a Number");
scanf("%d",&num1);
if(num1%2==0){
    printf("The enter value %d is even",num1);
}else{
    printf("The entered value %d is odd",num1);
}
return 0;
}