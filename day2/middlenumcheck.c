#include<stdio.h>
int main(){
	int firstNum,secNum,thirdNum,middleNum;
	printf("Enter First Number, Second Number, Third Number:\n");
	scanf("%d%d%d",&firstNum,&secNum,&thirdNum);
	if(firstNum>secNum&& firstNum<thirdNum || firstNum<secNum&&firstNum>thirdNum){
		middleNum=firstNum;
	}else if(secNum>firstNum&&secNum<thirdNum || secNum<firstNum&&secNum>thirdNum){
		middleNum=secNum;
	}else if(thirdNum<firstNum&&thirdNum>secNum || thirdNum>firstNum&&thirdNum<secNum){
		middleNum=thirdNum;
	}else{
		printf(" Their may be any two digit's are equal.");
	}
	printf("The required middle Number is: %d",middleNum);
	
	return 0;
}
