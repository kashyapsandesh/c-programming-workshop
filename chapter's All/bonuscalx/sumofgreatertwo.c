#include<stdio.h>

int main(){
int num1,num2,num3,great1,great2,sum;
printf("Enter the value of num1,num2,num3");
scanf("%d%d%d", &num1, &num2, &num3);
if(num1>num2>num3){
    great1=num1;
    great2=num2;
    sum=great1+great2;
    printf("The sum of two highest value is %d",sum);

}
if(num1>num3>num2){
    great1=num1;
    great2=num3;
    sum=great1+great2;
    printf("The sum of two highest value is %d",sum);

}
else if (num2 > num3 > num1)
{
    great1 = num2;
    great2 = num3;
    sum = great1 + great2;
    printf("The sum of two highest value is %d", sum);
}
else if (num2 > num1 > num1)
{
    great1 = num2;
    great2 = num1;
    sum = great1 + great2;
    printf("The sum of two highest value is %d", sum);
}
else if (num3 > num2 > num1)
{
    great1 = num3;
    great2 = num2;
    sum = great1 + great2;
    printf("The sum of two highest value is %d", sum);
}
else if (num3 > num1 > num2)
{
    great1 = num3;
    great2 = num1;
    sum = great1 + great2;
    printf("The sum of two highest value is %d", sum);
}
else{
    printf("Any two number is equal");
}
 return 0;
}