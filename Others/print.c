#include <stdio.h>

int main() {
    int int_val = 168;
    printf("Integer value(decimal) : %d\n", int_val);
    printf("Integer value in hexadecimal: %X\n", int_val);
    long long_val = 123456789;
    printf("Long integer value: %ld\n", long_val);
    
    float float_val = 9.81;
    printf("Floating-point value: %f\n", float_val);
    
    char ch = 'A';
    printf("Character value: %c\n", ch);
    
    char str[] = "Hello, World!";
    printf("String value: %s\n", str);
    
    return 0;
}

