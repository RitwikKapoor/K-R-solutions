#include<stdio.h>
#define MAX 1000
int getlinel(char s[], int lim);
void reverse(char line[], int len);

int main(){

int len, max = 0, ch;
char line[MAX];

while((len = getlinel(line,MAX)) > 0){
        printf("\n%s", line);
        reverse(line,len);
        printf("\n%s", line);
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

void reverse(char line[], int len){
    int s = 0;
    int e = len - 2;
    while(s <= (len - 1)/2){
        char temp = line[e];
        line[e] = line[s];
        line[s] = temp;
        s++;
        e--; 
    }
}