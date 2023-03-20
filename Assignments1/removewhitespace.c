#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; 

    printf("Result: %s\n", str); 

    return 0;
}

