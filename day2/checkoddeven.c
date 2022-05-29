#include<stdio.h>
int main(){
	int Num1;
	printf("Enter a valid number to check wheather it is odd or even \n");
	scanf("%d",&Num1);
	if(Num1%2==0){
		printf("The entered value %d is even.",Num1);
	}else{
		printf("The entered value %d is odd.",Num1);
	}
	return 0;
}
