#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 1000
void expand(char s[], char t[]);

int main(){
	char s[] = "a-z g-h-i g-x a-z0-9 -a-z-";
	char t[MAX];
	printf("\noriginal string: %s\n",s);
	expand(s,t);
	printf("\nexpanded string: %s\n",t);
	return 0;
}

void expand(char s[], char t[]){

	int i,j,c;
	t[0] = s[0];

	for(i = 1, j = 1; i < strlen(s) - 1; i++){
		if(s[i] == '-' && isalpha(s[i-1]) && isalpha(s[i+1])){
			for(c = s[i-1] + 1; c < s[i + 1] - 1; c++){
				t[j++] = c;
			}
		}
		else if(s[i] == '-' && isdigit(s[i-1]) && isdigit(s[i+1])){
			for(c = s[i-1] + 1; c < s[i + 1] - 1; c++){
				t[j++] = c;
			}
		}else{
			t[j++] = s[i];
		}
	}
	t[j++] = s[i];
	t[j] = '\0';
}
