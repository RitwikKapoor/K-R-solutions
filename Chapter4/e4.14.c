#include <stdio.h>

#define SWAP(t, x, y) \
do { \
    t temp = x; \
    x = y; \
    y = temp; \
} while (0)

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Integers before swap: num1=%d num2=%d\n", num1, num2);
    SWAP(int, num1, num2);
    printf("Integers after swap: num1=%d num2=%d\n", num1, num2);
    return 0;
}

