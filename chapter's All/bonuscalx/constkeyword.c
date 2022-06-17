#include<stdio.h>

int main(){
const float PI=3.14;
float area,cir,radius;
printf("Enter the radius");
scanf("%f",&radius);
area=PI*radius*radius;
cir=2*PI*radius;
printf("The area and circumference of circle is %f and %f",area,cir);

return 0;
}