#include<stdio.h>

int main(){
int n1=7,n2=4,
n3=(n1>n2)?n1:n2;//ternary operator
printf("greater number is %d",n3);
n1=n1+1;//unary operator
printf("After the increment n1= %d",n1);
n3=n1+n2;//plus+binary operator
printf("sum is %d",n3);

return 0;
}