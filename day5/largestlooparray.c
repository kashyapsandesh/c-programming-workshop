#include<stdio.h>
int main(){
    int i,data[10],greatest;
    printf("Enter 10 Numbers");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d\n",&data[i]);
    }
    //Assume data[0]
    greatest=data[0];
    for(i=0;i<10;i++){
    if(data[i]>greatest){
        greatest=data[i];
    }
    }
    printf("Largest Number in array is %d",greatest);
    return 0;
}