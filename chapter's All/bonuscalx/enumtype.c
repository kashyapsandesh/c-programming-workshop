#include<stdio.h>
enum week
{
    sun,
    mon,
    tue,
    thu,
    fri,
    sat
};
int main(){
   enum week selected_day;
printf("Enter from 0-6");
scanf("%d",&selected_day);
if(selected_day==sun){
    printf("Sunday selected");
}
else if (selected_day == mon)
{
    printf("Monday selected");
}else{
    printf("Some other days is selected");
}
}