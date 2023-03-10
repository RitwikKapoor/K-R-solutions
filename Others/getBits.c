#include <stdio.h>

//declare stuff
unsigned getbits(unsigned x, int p, int n);


int main()
{
    unsigned int x = 0xF994;
    int p = 4;
    int n = 3;
    int z = getbits(x, p, n);

    printf("getbits(%u (%x), %d, %d) = %u (%X)\n", x, x, p, n, z, z);
    return 0;
}

//the getbits function
unsigned int getbits(unsigned int x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

