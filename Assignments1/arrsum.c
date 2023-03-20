#include<stdio.h>
int main(){
	int arr1[5] = {1,2,3,1,1};
	int arr2[5] = {2,1,5,7,1};

	int (*ptr1)[5] = &arr1;
	int (*ptr2)[5] = &arr2;
	
	for(int i = 0; i < 5; i++){
		printf("%d  ", (*ptr1)[i] + (*ptr2)[i]);
	}
	printf("\n");
	
}
