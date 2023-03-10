#include <stdio.h>
#define MAX 1000

char *sstrncpy(char *s, char *t, int n)	{

	int i;
	char *p = s;

	for (i = 0; i < n && (*s++ = *t++); i++);
	
	if (i == n)
		*s = '\0';

	return p;
}

char *sstrncat(char *s, char *t, int n)	{
	
	while(*s != '\0') s++;

	return sstrncpy(s, t, n);
}

int sstrncmp(char *s, char *t, int n)	{
	
	for(int i = 0; i < n; i++){
		if(*s != *t){
			break;
		} 
		if (i == n || !*s){
			return 0;
		}
		s++;
		t++;
	}

	return *s - *t;
}

int main()	{
	int i;
	char s[MAX] = "hello world";
	char t[MAX] = "hello";
	i = sstrncmp(s,t,4);
	printf("%d\n", i);	
	printf ("String 1: %s\n", s);
        printf ("String 2: %s\n", t);


        sstrncat(s,t,3);

        printf("Joined Strings: %s\n", s);
	return 0;
}

