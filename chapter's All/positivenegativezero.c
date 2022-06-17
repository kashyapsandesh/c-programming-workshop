#include<stdio.h>

int main(){
int num1;
printf("Enter a Number");
scanf("%d",&num1);
if(num1<0){
    printf("The entered value is negative");
}else if(num1>0){
    printf("The entered value is positive");

}else{
    printf("The entered value is zero");
}
return 0;
}