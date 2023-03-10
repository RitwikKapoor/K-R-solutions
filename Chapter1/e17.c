#include<stdio.h>
#define MAX 1000
int getlinel(char s[], int lim);

int main(){

int len, max = 0;
char line[MAX];

while((len = getlinel(line,MAX)) > 0){
	if(len > 80){
        printf("\n%s", line);
	}
}

return 0;
}

int getlinel(char s[], int lim){
	int c,i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = c;
	}
	if (c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

