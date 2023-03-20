#include<stdio.h>
#include<stdlib.h>

int main(){
	int mat1[3][3] = {{1,2,1}, {1,1,1}, {2,1,1}};
	int mat2[3][3] = {{3,2,1}, {4,1,2}, {5,2,2}};

	int** res = (int **)malloc(3 * sizeof(int *));

for(int i = 0; i < 3; i++){
		int *row = (int *)malloc(3 * sizeof(int));
		*(res + i) = row;
		for(int j = 0; j < 3; j++){
		  *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
		}
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", *(*(res + i) + j));
		}
		printf("\n");
		free(*(res + i));
	}

	free(res);
}
