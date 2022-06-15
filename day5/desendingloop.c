#include<stdio.h>
void swap();
int main(){
    int i,j, data[10] = {8,6,5,4,3,2,5,7,9, 11};
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(data[j]<data[j+1]){
				swap(data,j,j+1);
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d, ", data[i]);
	}

}

void swap(int arr[10], int firstIndex, int secondIndex)
{
	int temp = arr[firstIndex];
	arr[firstIndex] = arr[secondIndex];
	arr[secondIndex] = temp;
}
