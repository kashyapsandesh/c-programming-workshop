#include<stdio.h>

int main(){
int bonus,income;
printf("Enter the income of employee");
scanf("%d",&income);
if(income>6000){
    bonus=0.06*income;
    printf("The bonus is %d ",bonus);
    
}else{
    bonus=250;
    printf("The bonus is %d",bonus);
}
return 0;
}