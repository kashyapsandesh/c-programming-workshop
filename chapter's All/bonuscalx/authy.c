#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
int marks1,marks2,marks3,percentage;
char auth;
printf("Enter the marks Marks1,Marks2,Marks3");

scanf("%d%d%d",&marks1,&marks2,&marks3);
percentage=(((marks1+marks2+marks3)*100)/300);
printf("Do you want to view the percentage of marks(Y/N)");
fflush(stdin);
scanf("%c",&auth);
if(auth='y'){
    printf("The percentage of entered marks is %d",percentage);
}else{
    printf("Thank you, you cannot view the percentage");
}
return 0;
}