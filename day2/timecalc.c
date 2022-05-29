#include<stdio.h>
int main(){
	int second,hour,intmin,finalmin;
	printf("Enter seconds");
	scanf("%d",&second);
	intmin=second/60;
	second%=60;
	hour=intmin/60;
	finalmin=intmin%60;
	printf("The hour,minute and remain second in entered seconds is: %d %d %d ",hour,finalmin,second);
	
	
	return 0;
}
