#include<stdio.h>

#define MAX 99
void swap(int* xp, int* yp);
void display(int arr[], int size);
void insertionSort(int arr[], int size);
int main(){
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
	insertionSort(array,count);
	display(array,count);
	
	return 0;
}
void insertionSort(int arr[], int size){
	int i, key, j;
	for(i = 1; i < size; i++){
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void display(int arr[], int size){
	int i;
	printf("{");
	for(i = 0; i < size; i++){
		i==size-1 ? printf("%d", arr[i]) : printf("%d|", arr[i]);
	}
	printf("}");
}
void swap(int* xp, int* yp){
	*xp += *yp;
	*yp = *xp - *yp;
	*xp -= *yp;
}

