#include<stdio.h>

int main(){
int sum=0,i;
for(i=2;i<=50;i=i+2){
 sum=sum+i;
 
}
printf("The sum of even number between 1-50 is %d", sum);

return 0;
}