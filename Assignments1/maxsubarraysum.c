#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define MAX(a,b) (a > b ? a : b)

int main(){
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);

	int* arr = (int*)malloc(size * sizeof(int));
	
	printf("Enter elements of array\n");
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	int maxsum = INT_MIN;

	for(int i = 0; i < size; i++){
		sum += arr[i];
		maxsum = MAX(maxsum,sum);
		if(sum < 0) sum = 0;
	}

	printf("Maximum subarray sum = %d\n", maxsum);
	free(arr);
	
	return 0;
}
