#include<stdio.h>

#define FUNC_NAME(name) function_##name
void FUNC_NAME(foo)(int x) {
    printf("The value of x is %d\n", x);
}
void FUNC_NAME(bar)(int y) {
    printf("The value of y is %d\n", y);
}
int main() {
    FUNC_NAME(foo)(10); // This calls the function "function_foo" with argument 10
    FUNC_NAME(bar)(20); // This calls the function "function_bar" with argument 20
    return 0;
}

