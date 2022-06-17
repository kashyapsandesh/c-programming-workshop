//WAp in c to calculate simple intrest on daily basis
#include<stdio.h>

int main(){
float p,t,r,si,day,ext=0;
printf("Enter the principle,time, rate");
scanf("%f%f%f",&p,&t,&r);
ext = t/365;
si=p*ext*r/100;
printf("\n%f",si);


return 0;
}