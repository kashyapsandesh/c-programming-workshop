#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
float area,radius;
printf("Enter the radius of circle");
scanf("%f",&radius);
area=PI*radius*radius;
printf("The area of circle is %f",area);

return 0;
}