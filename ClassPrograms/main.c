#include<stdio.h>
#include "mylib.h"


int main(){
	printf("previous value = %d\n", my_global);
	update_global();
	printf("new value = %d\n", my_global);
	return 0;
}
