#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

int my_getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int main(int argc, char *argv[]){
	char line[MAXLINE];
	long lineno = 0;
	int c, except = 0, number = 0, found = 0;
	//printf("\n%d\n", argc);
	while(--argc > 0 && (*++argv)[0] == '-'){
		//printf("String : %s\n", *argv);
		//printf("Charup :%c %c\n", *argv[0], argv[0][0]);
		//printf("Charup2 : %c %c\n", *(argv[0] + 1), argv[0][1]);
		while(c = *++argv[0]){
			//printf("Char :%c\n", *argv[0]);
			switch(c){
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("find: illegal option %c\n", c);
					argc = 0;
					found = -1;
					break;
			}
		}
	}

	if(argc != 1)
		printf("Usage: find -x -n pattern\n");
	else
		while(my_getline(line,MAXLINE) > 0){
			lineno++;
			if((strstr(line, *argv) != NULL) != except){
				if(number)
					printf("%ld ", lineno);
				printf("%s", line);
				found++;
			}
		}
		return found;
	return 0;
}

//To run this program
//gcc find.c -o find
//./find -x -n pattern
