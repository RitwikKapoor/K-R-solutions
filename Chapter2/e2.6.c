#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	int x = 9713;	// 0010 0101 1111 0001
	int y = 3500;   // 0000 1101 1010 1100
	
	printf("Setbit result: %d\n", setbits(x,11,4,y)); // expecting 0010 1100 1111 0001 - 11761
	
	return 0;
}

/* setbits: set n bits in x starting from position p to the rightmost n bits from y, leaving other bits unchanged */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	int mask = ~(~0 << n) << (p - n + 1);	// 0000 1111 0000 0000
	x &= ~mask;				// 0010 0000 1111 0001

	y = getbits(y,n-1,n);			// 0000 0000 0000 1100
	y <<= (p - n + 1);			// 0000 1100 0000 0000
	
	return 	x | y;				// 0010 1100 1111 0001
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}


//Copied solution. Not written by me
