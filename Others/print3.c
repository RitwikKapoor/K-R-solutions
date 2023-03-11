#include <stdio.h>

int main() {
    char str5[] = "John 25 3.14";
    char name[10];
    int age;
    float pi;

    sscanf(str5, "%9s %d %f", name, &age, &pi);
    printf("%s %d %.2f\n", name, age, pi);

    char str[50];
    int num = 123;
    float pi2 = 3.14;
    
    sprintf(str, "Number: %d, Pi: %.2f", num, pi2);
    
    printf("%s\n", str);
    
    return 0;
}

