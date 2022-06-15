#include<stdio.h>
#define PI 3.14
int main(){
	float radius,area,circumference;
	printf("Enter the radius");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circumference=2*PI*radius;
	printf("The area and circumference of circle is %f and %f respectively",area,circumference);
	return 0;
}
