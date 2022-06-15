#include<stdio.h>

int main(){
int i,count=0,sum=0;
for(i=1;i<=100;i++){
    if(i%2!=0 || i%5!=0){
        printf("%d\t",i);
        count++;
        sum=sum+i;
    }
}
    printf("Total Numbers=%d",count);
    prinf("The sum of total number not divisible by 5 and 2 is %d",sum);
return 0;
}