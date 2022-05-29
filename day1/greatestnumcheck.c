#include<stdio.h>
//WAP in c to find the which is greatest number among entered three number
int main(){
	int firstNum,secondNum,thirdNum;
	printf("Enter First Number, Second Number, Third Number : \n ");
	scanf("%d%d%d",&firstNum,&secondNum,&thirdNum);
	if(firstNum>secondNum && firstNum>thirdNum){
		printf("%d is greater than %d and %d",firstNum,secondNum,thirdNum);
	}else if(secondNum>firstNum && secondNum>thirdNum){
		printf("%d is greater than %d and %d",secondNum,firstNum,thirdNum);
	}else{
		printf("%d is greater than %d and %d",thirdNum,secondNum,firstNum);
	}
	return 0;
}
