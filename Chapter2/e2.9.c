#include<stdio.h>
int bitcount(unsigned int x);
int main(){
	int n = 89;
	printf("\nSetbits in %d = %d\n", n, bitcount(n)); 
	return 0;
}

int bitcount(unsigned int x){
	
	int b = 0;
	while(x != 0){
		x &= (x - 1);
		b++;
	}
	return b;
}
