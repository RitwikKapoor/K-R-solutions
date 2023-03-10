#include <stdio.h>
int hToi(char hex[]);

int main() {
    char hex[] = "0x1F";
    
    printf("Hexadecimal value %s is equal to %d in decimal\n", hex, hToi(hex));

    return 0;
}

int hToi(char hex[]){
int value = 0;
    int i;

    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
        i = 2;
    } else {
        i = 0;
    }

    for (; hex[i] != '\0'; i++) {
        value = value * 16;
        if (hex[i] >= '0' && hex[i] <= '9') {
            value += hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            value += hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            value += hex[i] - 'a' + 10;
        } else {
            printf("Invalid input\n");
            return -1;
        }
    }
    return value;
}
