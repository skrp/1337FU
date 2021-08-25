// KR 18
#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int bitcount(unsigned x);

int main()
{
	unsigned x;
	int p,n;
	p=40;
	n=10;
	x=4340344;
	printf("%u\n", getbits(x,p,n));
	printf("%d\n", bitcount(x));
	return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}
int bitcount(unsigned x)
{
	int b;

	for (b=0; x != 0; x >>= 1)
	{
		if (x & 01)
			{b++;}
	}

	return b;
}
