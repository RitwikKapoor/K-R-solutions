#include <stdio.h>


unsigned int invert(unsigned int x, int p, int n);


int main()
{
    unsigned int x = 1968;
    int p = 5;
    int n = 3;
    int z = invert(x, p, n);

    printf("invert(%u (%x), %d, %d) = %u (%X)\n", x, x, p, n, z, z);
    return 0;
}

unsigned int invert(unsigned int x, int p, int n)
{
    return x ^ ((~(~0<<n))<<p+1-n);
}

