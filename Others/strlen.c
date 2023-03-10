#include <stdio.h>
int strlenl(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
int main()
{
    char array[] = {'a','b','c','d', '\0'};
    printf("%i\n", strlenl(array));
    return 0;
}
