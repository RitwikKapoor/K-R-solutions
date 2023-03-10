#include <stdio.h>

#define MAX 1000

int getlinel(char line[], int maxline);

int main(void){
    int len;
    char line[MAX]; 

    while ((len = getlinel(line, MAX)) > 0) {
        if (len == 1 && line[0] == '\n')
            continue;
        printf("%s\n", line);
    }

    return 0;   
}

int getlinel(char s[], int lim){
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i){
        if (i < lim - 1)
            s[l++] = c;
    }
    if (c == '\n' && l < lim - 1)
        s[l++] = c;
    s[l] = '\0';

    return l;
}
