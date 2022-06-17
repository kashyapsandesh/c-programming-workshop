#include<stdio.h>

int main(){
int sec,initmin,finalmin,hours,remainsec;
printf("Enter the seconds");
scanf("%d",&sec);
initmin=sec/60;
remainsec=sec%60;
hours=initmin/60;
finalmin=initmin%60;

printf("The hours min and remain sec of entered second is %d\t hours %dmin\t%d sec",hours,finalmin,remainsec);

return 0;
}