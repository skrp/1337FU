// KR 27
//
#include <stdio.h>
#include <ctype.h>
int getch(void);
void ungetch(int);
int getint(int *pn);

#define BUF 100

char buf[BUF];
int bufp = 0;

int main()
{
	char buf[BUF];
	int bufp = 0;
	int *pn;
	int x;

	while ((x = getchar()) != EOF)
	{
		pn = &x;
		getint(pn);
	}
	return 0;
}
// get next integer from into *pn
int getint(int *pn)
{
	int c, sign;
// skip whitespace
	while (isspace(c = getch()))
		{;} 
	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
// not a number
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		{ *pn = 10 * *pn + (c - '0'); }
	*pn *= sign;
	if (c != EOF)
		{ungetch(c);}
	return c;
}
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
	if (bufp >= BUF)
		{printf("FAIL ungetch: too many toons\n");}
	else
		{ buf[bufp++] = c; }
}
