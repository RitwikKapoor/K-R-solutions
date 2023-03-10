#include <stdio.h>
int atoi(char *s)
{
    int n = 0;
    for (int i = 0; *(s+i) >= '0' && *(s+i) <= '9'; ++i){    
        n = 10 * n + (*(s+i) - '0');
    }
    return n;
}
int main()
{
    char string_of_digits[] = {'1','2','3','4'};
    printf("%i\n", atoi(string_of_digits));
    return 0;
}
