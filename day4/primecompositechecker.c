//WAP in c to check whether the entered value is composite or price
#include<stdio.h>
int main(){
	int num1,checker,i;
	printf("Enter A Valid");
	scanf("%d",&num1);
	for(i=1;i<=num1;i++){
		if(num1%i==0){
			checker++;
		}
	}
	if(checker==0){
		printf("The Entered value is neithe prime nor composite");
	}else if(checker==2){
		printf("The Entered Value is Prime");
	}else{
		printf("The Entered value is composite");
	}
	return 0;
}
