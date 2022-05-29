#include<stdio.h>
#include<math.h>
int main(){
	float area,sideA,sideB,sideC,semiPerimeter;
	printf("Enter The Sides A,B,C :\n");
	scanf("%f%f%f",&sideA,&sideB,&sideC);
	semiPerimeter=(sideA+sideB+sideC)/2;
	area= sqrt(semiPerimeter * (semiPerimeter-sideA)*(semiPerimeter-sideB)*(semiPerimeter-sideC));
	printf("The area of traingle is %f",area);
	return 0;
}
