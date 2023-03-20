#include<stdio.h>

unsigned long long fac(int n);

int main(){
	int n;
	printf("\nEnter the number: ");
	scanf("%d", &n);
	printf("\nAns: %llu\n" ,fac(n));
}

unsigned long long fac(int n){
	if(n == 0){
		return 1;
	}

	return n * fac(n - 1);
}
