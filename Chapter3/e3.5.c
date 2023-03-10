#include<stdio.h>
#include<string.h>

void iTob(int n, char s[], int b);
int main(){
	int n = 78;
	char s[1000];
	memset(s, 0, sizeof(s));
	printf("\nOriginal number: %d\n", n);
	int b = 16;
	iTob(n,s,b);
	printf("String base %d: %s\n",b, s);
	return 0;
}

void iTob(int n, char s[], int b){
	int i,sign,r;
	if((sign = n) < 0){
		n = -n;
	}
	i = 0;
	do{	
		r = n % b;
		s[i++] = (r > 9 ? r - 10 + 'A' : r + '0');
	}while((n/=b) > 0);

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
