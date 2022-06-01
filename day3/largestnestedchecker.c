#include<stdio.h>
int main(){
	int num1,num2,num3,largest;
	printf("Enter the value of Num1, Num2 and Num3");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		if(num1>num3){
			printf("%d is largest than %d and %d",num1,num2,num3);
		}else{
			printf("%d is greater than %d and %d",num3,num2,num1);
		}
	}
	else{
		if(num2>num3){
			printf("%d is greater than %d and %d",num2,num1,num3);
		}		
		else{
						printf("%d is greater than %d and %d",num3,num2,num1);

		}
	}
	return 0;
}
