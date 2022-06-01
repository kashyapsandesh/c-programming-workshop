#include<stdio.h>
int main(){
	int income,tax;
	printf("Enter Your Annual Income:\n");
	scanf("%d",&income);
	if(income< 10000){
		tax=0;
	}else if(income<20,000){
		tax=0+(income-10000)*0.1;
	}else if(income<30000){
		tax=0+((10000)*0.1)+((income-20000)*0.15);
	}else if(income<50000){
		tax=0+((10000)*0.1)+((20000)*0.15)+((income-30000)*0.2);
	}
	else{
	tax=0+((10000)*0.1)+((20000)*0.15)+((30000)*0.2+((income-50000)*0.25));	
	}
	printf("taxAmount is %d:",tax);
	return 0;
}
