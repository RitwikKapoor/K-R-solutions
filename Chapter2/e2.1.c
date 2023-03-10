#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int: %u to %u\n", 0, UINT_MAX);
    printf("unsigned long: %lu to %lu\n", 0UL, ULONG_MAX);

    printf("float: %d decimal digits of precision, max value = %e\n", FLT_DIG, FLT_MAX);
    printf("double: %d decimal digits of precision, max value = %e\n", DBL_DIG, DBL_MAX);
    return 0;
}

