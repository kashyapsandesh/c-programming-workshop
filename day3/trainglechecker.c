//WAP in c to identify the sides of traingle is value or not and print area if it is valid;
#include<stdio.h>
int main(){
	float side1,side2,side3,semiperimeter,area;
	printf("Enter the sides of traingle: Side1, Side2 & Side3 respectively\n");
	scanf("%f%f%f",&side1,&side2,&side3);
	if((side1<side2+side3)&&(side2<side1+side3)&&(side3<side1+side2)){
		semiperimeter= (side1+side2+side3)/2;
		area=(sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3)));
		printf("The area of traingle is: %f",area);
		
	}else{
		printf("The Entered sides is invalid");
	}
	return 0;
}
