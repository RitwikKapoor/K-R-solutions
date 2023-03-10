#include<stdio.h>
#include<string.h>

int strend(char *, char *);

int main(void)
{
    char *s = "abcde";
    char *t = "def";
    printf("%d\n",strend(s, t));
    return 0;
}

int strend(char *s, char *t){
	int len_t = strlen(t);
	char *p = s + len_t;

	while(*t != '\0'){
		if(*p != *t){
			return 0;
		}
		t++;
		p++;
	}

	return *p == '\0' ? 1 : 0;
}
