#include<stdio.h>
int main(){
	float length,breadth,area;
	printf("Enter length and breadth");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	printf("The area of rectangle is %f",area);
	return 0;
}
