#include<stdio.h>

int main(){
int num1,num2,quotient,remainder;
printf("Enter the number 1 and number2");
scanf("%d%d",&num1,&num2);
quotient=num1/num2;
remainder=num1%num2;
printf("The quotient and remainder of num1 and num2 is %d and %d respectively",quotient,remainder);
return 0;
}