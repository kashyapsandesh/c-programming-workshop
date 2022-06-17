#include<stdio.h>

int main(){
int num1,num2,num3;
printf("Enter the Three value Num1,Num2,Num3");
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3)){
    printf("The largest Value among entered is %d",num1);
}
else if ((num2 > num3) && (num2 > num1))
{
    printf("The largest Value among entered is %d", num2);
}else{
    printf("The largest among three entered is %d",num3);
}
return 0;
}