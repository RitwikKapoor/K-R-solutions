#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr, int start, int end){
     while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
       }	
}

int main() {
    int size, k, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int *arr = calloc(size, sizeof(int));
    printf("Enter the elements of the array:\n");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate the array to the right: ");
    scanf("%d", &k);
	
    reverse(arr,0,size-1);
    reverse(arr,0,k-1);
    reverse(arr,k,size-1);


    printf("The rotated array is:\n");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

