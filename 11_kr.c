// KR 11
// count words
#include <stdio.h>
// inside outside word
#define IN 1 
#define OUT 2
int main()
{
	int c, nl, nw, nc,state;
	state = OUT;

	nl=nw=nc=0;

	while ((c = getchar()) != EOF)
	{
		++nc;

		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("lines: %d\twords: %d\tchar: %d\n", nl, nw, nc);
}
