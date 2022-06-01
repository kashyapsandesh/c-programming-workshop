#include<stdio.h>
int main(){
	int num1,num2,sum;
	top1:
	printf("Enter First Number:\n");
	scanf("%d",&num1);
	if(num1<0){
		goto top1;
	}
	top2:
	printf("Enter Second Number:\n");
	scanf("%d",&num2);
	if(num2<0){
		goto top2;
	}
	sum=num1+num2;
	printf("The sum of two Number is %d",sum);
	
	return 0;
}
