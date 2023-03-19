#include<stdio.h>
#include<stdlib.h>

#define MAX 99
void bubbleSort(int arr[], int  size);
void swap(int* xp, int* yp);
void display(int arr[], int size);
int main(void){
	int array[MAX];
	int count, i;
	
	printf("How many numbers are you gonna input?\n");
	scanf("%d", &count);
	
	for(i = 0; i < count; i++){
		scanf("%d", &array[i]);
	}
	printf("Current Array: \n");
	display(array,count);
	printf("\nSorted Array: \n");
	bubbleSort(array,count);
	display(array,count);
	
	return 0;
}

void display(int arr[], int size){
	int i;
	printf("{");
	for(i = 0; i < size; i++){
		i == size-1 ? printf("%d", arr[i]) : printf("%d|", arr[i]);
	}
	printf("}");
}
void swap(int* xp, int* yp){
	*xp += *yp;
	*yp = *xp - *yp;
	*xp -= *yp;
}

void bubbleSort(int arr[], int size){
	int i,j,temp;
	for(i = 0; i < size; i++){
		arr[i] = arr[i];
    }
	for(i = 0; i < size - 1; i++){
		for(j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
