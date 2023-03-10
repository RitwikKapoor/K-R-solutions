#include <stdarg.h>
#include <stdio.h>


void minscanf(char *fmt, ...)
{
    va_list ap;
    int* ival;
    float* fval;
    unsigned* uval;
    char *p;		

    va_start(ap, fmt);  
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            continue;
        }
        switch (*++p) {
        case 'd':
        case 'i':
            ival = va_arg(ap, int*);
            scanf("%d", ival);
            break;
        case 'u':
            uval = va_arg(ap, unsigned int*);
            scanf("%u", uval);
            break;
        case 'o':
            uval = va_arg(ap, unsigned int*);
            scanf("%o", uval);
            break;
        case 'x':
            uval = va_arg(ap, unsigned int*);
            scanf("%x", uval);
            break;
        case 'X':
            uval = va_arg(ap, unsigned int*);
            scanf("%X", uval);
            break;
        case 'f':
            fval = va_arg(ap, float*);
	    scanf("%f", fval);
	    break;
	}
 }
    va_end(ap);
}

int main(){
	float i;
	minscanf("%f", &i);
	printf("scanned %f\n", i);
}
