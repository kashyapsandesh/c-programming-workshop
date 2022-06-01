#include<stdio.h>
int main(){
	float a,b,c,det,x1,x2;
	printf("Enter the cofficent of quadratic equation");
	scanf("%f%f%f",&a,&b,&c);
	det=b*b-4*a*c;
	x1=(-b+sqrt(det))/(2*a);
	x2=(-b-sqrt(det))/(2*a);
	if(det==0){
		printf("Roots are equal and real");
		printf("Root1 is: %f",x1);
		printf("Root2 is: %f",x2);
	
	}else if (det>0){
		printf("Roots are real and distinct");
		printf("Root1 is: %f",x1);
		printf("Root2 is: %f",x2);
	}
	else{
		printf("Roots are imaginary");
		
	}
	
	
	return 0;
	
}
