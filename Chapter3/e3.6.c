#include<stdio.h>
#include<limits.h>
#include<string.h>

void iToa(int n, char s[], int width);
void reverse(char s[]);

int main(void) {
    char buffer[20];
    
    iToa(1000, buffer, 7);
    printf("Buffer:%s\n", buffer);
    
    return 0;
}

void iToa(int n, char s[], int width) {
    int i, sign;
    
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
        //printf("%d %% %d + '0' = %d\n", n, 10, s[i-1]);
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    
    while (i < width )    /*  Only addition to original function  */
        s[i++] = ' ';
    
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        int temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
}
}
