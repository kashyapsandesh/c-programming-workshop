#include<stdio.h>
int main(){
	int firstNumber,secondNumber,sum,product;
	printf("Enter any two values");
	scanf("%d%d",&firstNumber,&secondNumber);
	sum=firstNumber+secondNumber;
	product=firstNumber*secondNumber;
	printf("%d is sum and %d is product",sum,product);
	return 0;
}
