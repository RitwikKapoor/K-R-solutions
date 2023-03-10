#include<stdio.h>
#include<string.h>

void iToa(int n, char s[]);
int main(){
	int n = -76224;
	char s[1000];
	memset(s, 0, sizeof(s));
	printf("\nOriginal number: %d\n", n);
	iToa(n,s);
	printf("String: %s\n", s);
	return 0;
}

void iToa(int n, char s[]){
	int i,sign;
	if((sign = n) < 0){
		n = -n;
	}
	i = 0;
	do{
		s[i++] = n % 10 + '0';
	}while((n/=10));

	if(sign < 0){
		s[i++] = '-';
	}
	s[i] = '\0';
	int len = strlen(s);
    	for (i = 0; i < len / 2; i++) {
        	char temp = s[i];
        	s[i] = s[len - i - 1];
        	s[len - i - 1] = temp;
    }
}
