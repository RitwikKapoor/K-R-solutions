#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void find_second_largest_and_smallest(int* arr, int size, int* second_largest, int* second_smallest) {
    int largest = INT_MIN;
    int smallest = INT_MAX;
    *second_largest = INT_MIN;
    *second_smallest = INT_MAX;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            *second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > *second_largest && arr[i] < largest) {
            *second_largest = arr[i];
        }
        
        if (arr[i] < smallest) {
            *second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *second_smallest && arr[i] > smallest) {
            *second_smallest = arr[i];
        }
    }
}


int main(){
	
    int size, second_largest, second_smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++){
	int n;
    	printf("Ente num %d: ", i+ 1);
	scanf("%d", &n);
	arr[i] = n;
    }	


    find_second_largest_and_smallest(arr, size, &second_largest, &second_smallest);
    
    printf("The second largest element in the array is %d\n", second_largest);
    printf("The second smallest element in the array is %d\n", second_smallest);
    
    return 0;	


    return 0;
}
