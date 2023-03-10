#include <stdio.h>
#include <stdarg.h>

double average(int count, ...) {
    va_list ap;
    int i;
    double sum = 0;

    va_start(ap, count);
    for (i = 0; i < count; i++) {
        sum += va_arg(ap, double);
    }
    va_end(ap);

    return sum / count;
}

int main() {
    double avg1 = average(3, 1.0, 2.0, 3.0);
    double avg2 = average(4, 1.0, 2.0, 3.0, 4.0);

    printf("Average 1: %lf\n", avg1);
    printf("Average 2: %lf\n", avg2);

    return 0;
}

