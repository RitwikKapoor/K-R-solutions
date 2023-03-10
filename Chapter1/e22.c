#include <stdio.h>

#define MAX 1000   
#define N 15  

int getlinel(char s[], int maxline);

int main()
{
    int len, k = 0;                
    char line[MAX];     
    char ch;  


    while ((len = getlinel(line, MAX)) > 0) {
        if(len < N){
            printf("%s", line);
        }else{
            for(int i = 0; i < len; i++){
                printf("%c", line[i]);
                if(i % N == 0 && i != 0){
                    printf("\n");
                }
            }
        }
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