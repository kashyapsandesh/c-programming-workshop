//Wap in c to calculate electricity bill where the following things are given:
// Provided that Charges of electricity are
/*
upto 100 units -> 40p/unit
next 300 units -> 50p/unit
beyond 300 units -> 60p/unit
*/

#include<stdio.h>
#include<Math.h>
int main(){
	int unit;
	float amt;
	printf("Enter the unit:\n");
	scanf("%d",&unit);
	if(unit<=100){
		amt=unit*0.4;
	}
	else if(unit<=300){
		amt=100*0.4+(unit-100)*0.5;
	}else{
		amt=100*0.4+200*0.5+(unit-300)*0.6;
	}
	amt=amt+50;
	if(amt>250){
		amt=amt+0.15*amt;
	}
	printf("The total payable amount is %f",amt);
	return 0;
	
}




