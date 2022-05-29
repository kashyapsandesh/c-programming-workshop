#include<stdio.h>
int main(){
	int temp,celsius,fahrenheit;
	printf("Enter Today Celsius Temperature To View IN Fahrenheit: \n");
	scanf("%d",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("The Temperature Conversion of %d Celsius in Fahrenheit is : %d ",celsius,fahrenheit);
	return 0;
}
