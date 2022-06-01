//WA menu based program in c to compute addition, subtraction,Multiplication and division of two Number;
#include<Process.h>
#include<stdio.h>

int main(){
	int num1,num2,ch;
	printf("Enter any number from 1-5:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. exit\n");

	scanf("%d",&ch);
	exit(0);
	printf("Enter any two random Number:\n");
	scanf("%d%d",&num1,&num2);
	switch(ch)
	{
		case 1:
			printf("The Sum of entered two number is %d",num1+num2);
			break;
		case 2:
			printf("The Difference of entered two number is %d",num1-num2);
			break;
		case 3:
			printf("The Multiplication of entered two number is %d",num1*num2);
			break;
		case 4:
			printf("The Division of entered two number is %d",num1/num2);
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Please Enter the number from 1-5 only.");
			break;
	}
	
	return 0;
}
