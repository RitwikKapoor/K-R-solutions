#include<stdio.h>

int main(){
	
	char *s = "ABC";
	printf("String is %s and num representaion is %u\n", s, *((unsigned int*)s));
}
