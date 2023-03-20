#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int s = 0;
    int e = strlen(str) - 1;

    while(s <= e){
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
	s++;
	e--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str);

    printf("The reversed string is: %s\n", str);

    return 0;
}

