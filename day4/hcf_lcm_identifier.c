//WAP in c to find HCF and LCM of two numbers entered by User
#include<stdio.h>
int main(){
	int num1,num2,min,i,lcm,hcf;
	printf("Enter Two Number:\n");
	scanf("%d%d",&num1,&num2);
	min=(num1<num2)?num1:num2;
	for(i=1;i<min;i++){
		if((num1%i==0)&&(num2%i==0)){
			hcf=i;
		}
	}
	lcm=(num1*num2)/hcf;
	printf("The HCF of entered number is %d",hcf);
	printf("The Lcm of entered number is %d",lcm);
	return 0;
}

