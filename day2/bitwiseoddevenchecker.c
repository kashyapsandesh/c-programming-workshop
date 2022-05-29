#include<stdio.h>
//#include<stdlib.h>
//bitwise operation perform the value in binary form where 1+1=1,1+0=0
int main(){
	int Num1;
	printf("Enter a valid value");
	scanf("%d",&Num1);
	if(Num1&1){
		printf("The entered value %d is odd.",Num1);
	}else{
			printf("The entered value %d is even.",Num1);
	}
	return 0;
}
