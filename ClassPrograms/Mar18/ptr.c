#include<stdio.h>
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int (*ptr)[5] = &arr;
	size_t size = sizeof(*ptr);

	printf("The size of the pointer is: %zu bytes\n", size);

}
