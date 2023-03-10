#include <stdarg.h>
#include <stdio.h>


void minprintf(char *fmt, ...)
{
    va_list ap;
    char *p, *sval;
    int ival;
    double dval;
    unsigned uval;

    va_start(ap, fmt);  
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        switch (*++p) {
        case 'd':
        case 'i':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'c':
            ival = va_arg(ap, int);
            putchar(ival);
            break;
        case 'u':
            uval = va_arg(ap, unsigned int);
            printf("%u", uval);
            break;
        case 'o':
            uval = va_arg(ap, unsigned int);
            printf("%o", uval);
            break;
        case 'x':
            uval = va_arg(ap, unsigned int);
            printf("%x", uval);
            break;
        case 'X':
            uval = va_arg(ap, unsigned int);
            printf("%X", uval);
            break;
        case 'e':
            dval = va_arg(ap, double);
            printf("%e", dval);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 'g':
            dval = va_arg(ap, double);
            printf("%g", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char *); *sval; sval++)
                putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap);
}   

int main(){
    int a = 10;
    char c = 'A';
    char *str = "Hello, world!";
    double pi = 3.14159;

    minprintf("This is a string with a %d and a %s.\n", 42, "test");

    minprintf("The integer is %d and the character is %c.\n", a, c);

    minprintf("The string is '%s' and the number is %f.\n", str, pi);

    minprintf("The hexadecimal number is %x and the octal number is %o.\n", a, a);

    minprintf("The string is '%s' and the unsigned integer is %u.\n", str, (unsigned)a);

    return 0;
}
