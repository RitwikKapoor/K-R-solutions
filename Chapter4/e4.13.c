#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);     //function prototype

int main(){
    char s[] = "hello";     
    reverse(s, 0, (strlen(s)-1));   
    printf("%s\n", s);
    return 0;
}

void reverse(char s[], int l, int r){ 
    int c;
    if (l < r) {
        reverse(s, l+1, r-1);
        c = s[l];
        s[l] = s[r];
        s[r] = c;
    }
}

