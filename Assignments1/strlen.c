#include<stdio.h>

int main(){
	char str[1000];
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	int len = 0;
	char* ptr = str;

	while((*ptr) != '\0'){
		len++;
		ptr++;
	}

	printf("Length of string: %d\n", len);

	return 0;
}
