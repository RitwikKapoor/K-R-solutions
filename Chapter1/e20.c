#include <stdio.h>

#define MAX 1000  
#define TAB 4     

int getlinel(char s[], int lim);
void detab(char to[], char from[]);

int main()
{
    int len;                
    char line[MAX];     
    char nline[MAX];    

    while ((len = getlinel(line, MAX)) > 0) {
        detab(nline, line);
        printf("%s", nline);
    }

    return 0;
}

int getlinel(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';

    return i;
}

void detab(char to[], char from[])
{
    int i = 0, j = 0, t = 0;
    while ((to[j] = from[i]) != '\0') {
        if (to[j] == '\t')
            for (t = 0; t < TAB; t++, j++)
                to[j] = ' ';
        else
            j++;
        i++;
    }
}
