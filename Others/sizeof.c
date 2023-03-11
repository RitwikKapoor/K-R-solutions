#include<stdio.h>
int main(){
	printf("Sizeof data types:\n");
	printf("int :%li\n", sizeof(int));
	printf("char: %li\n", sizeof(char));
	printf("long: %li\n", sizeof(long));
	printf("double: %li\n", sizeof(double));	
	printf("short: %li\n", sizeof(short));
	printf("long long int:%li\n", sizeof(long long int));
	printf("float: %li\n", sizeof(float));
	printf("unsigned int: %li\n", sizeof(unsigned int));
	printf("size_t:%li\n", sizeof(size_t));


	printf("\nSizeof data types:\n");
	printf("int* :%li\n", sizeof(int*));
	printf("char*: %li\n", sizeof(char*));
	printf("long*: %li\n", sizeof(long*));
	printf("double*: %li\n", sizeof(double*));	
	return 0;
}
