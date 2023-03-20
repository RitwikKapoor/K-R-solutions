#include<stdio.h>
#include<stdlib.h>

int main(){
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);

	int* arr = (int*)malloc(size * sizeof(int));
	
	printf("Enter elements of array\n");
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("Array after sorting\n");
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	free(arr);
	printf("\n");
}
