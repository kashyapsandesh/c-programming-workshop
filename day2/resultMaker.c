#include<stdio.h>
#include<string.h>
int main(){
	char studentName[100];
	char grade[10];
	int markInPhysic,markInChemistry,markInMath,percentage;
	printf("Enter The Student Name:\n");
	scanf("%s",studentName);
	printf("Enter the obtain marks in Physics \t Chemistry \t Math \t  :\n");
	scanf("%d%d%d",&markInPhysic,&markInChemistry,&markInMath);
	if(markInPhysic>45&&markInChemistry>45&&markInMath>45){
		printf("Name\t\t Physic\t\t Chemistry\t\t Math\t\t Percentage\t\t Grade\n");
		percentage=((markInPhysic+markInChemistry+markInMath)*100)/300;
		if(percentage>=90){
			strcpy(grade, "A+");
		}else if (percentage>=80){
			strcpy(grade, "A");
		}
		else if (percentage>=70){
			strcpy(grade, "B+");
		}
		else if (percentage>=60){
			strcpy(grade, "B");
		}
		else if (percentage>=50){
			strcpy(grade, "C+");
		}
		else{
			strcpy(grade, "C");
		}
	printf("%s\t\t %d\t\t%d\t\t%d\t\t\%d\t\t%s\n", studentName, markInPhysic, markInChemistry, markInMath, percentage, grade);
		
	}
	else{
		printf("Result \t\t\t Remarks");
		printf("%s\t\t\t Failed");
	}

	return 0;
}
