#include<stdio.h>
#define MAX 1000
void escape(char s[], char t[]);
int main(){
	int i, c;
	char s[MAX], t[MAX];
	for (i=0; i<MAX-1 && (c=getchar()) != EOF; ++i)
		s[i] = c;
	s[i] = '\0';

	escape(s,t);
	printf("\n%s\n", t);
	return 0;
}

void escape(char s[], char t[]){

int i = 0, j = 0;

while(s[i] != '\0'){
	switch(s[i]){
	
		case '\n':
			t[j++] = '\\';
			t[j] = 'n';
			break;
	
		case '\t':
			t[j++] = '\\';
			t[j] = 't';
			break;

		case '\b':
			t[j++] = '\\';
			t[j] = 'b';
			break;
		default:
			t[j] = s[i];
			break;
	}
	i++;
	j++;
}
t[j] = s[i]; //for null character
}
