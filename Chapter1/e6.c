#include<stdio.h>
int main(){
	printf("\nInteger   Char    Hexa              Octal\n");
	printf("%d          %c       %x       %o\n", EOF, EOF, EOF, EOF);
	int c;
	char value = ((c = getchar()) != EOF);
        printf("%i\n", value);
	return 0;
}
