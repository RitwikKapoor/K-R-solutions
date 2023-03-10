#include<stdio.h>
#define MAX 1000

void strcatt(char *s, char *t){
	while(*s != '\0'){
		s++;
	}
	while((*s = *t) != '\0'){
		s++;
		t++;
	}
}


int main(){
	char s[MAX] = "Do you love";
	char t[MAX] = "to code?";

	printf ("String 1: %s\n", s);
        printf ("String 2: %s\n", t);

        strcatt(s,t);

        printf("Joined Strings: %s\n", s);
}
