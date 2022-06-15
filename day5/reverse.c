//Wap in c to display input 10 numbers in reverse order
#include <stdio.h>
int main(){
    int data[10],i;//data[10] means 10 Number's
    printf("Enter 10 Number");
    for(i=0;i<10;i++){// To take 10 input, we should take input through loop 
        scanf("%d",&data[i]);
    }
    printf("The Numbers in reverse order is:\n");
    for ( i = 9; i >=0; i--)
    {
       printf("%d\n",data[i]);
    }
    

    return 0;
}