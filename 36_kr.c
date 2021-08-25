// KR 36
// -x remove line that if a pattern is found
// -n list line of number positive match
#include <stdio.h>
#include <string.h>

#define MAX 1000

int getln(char *line, int max);
// print lines that match patterns from ARG1
int main(int argc, char *argv[])
{
	char line[MAX];
	long lineno = 0;
	int c, except=0, number=0, found=0;

	while (--argc > 0 && (*++argv)[0] == '-')
	{
		while ((c = *++argv[0]))
			switch (c) 
			{
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("FAIL bad ARG %c\n", c);
					argc = 0;
					found = -1;
					break;
			}
	}
	if (argc != 1)
		{ printf("FAIL: ARG1 -x ARG2 -n pattern\n"); }
	else
	{
		while (getln(line, MAX) > 0)
		{
			lineno++;
			if ((strstr(line, *argv) != NULL) != except)
			{
				if (number)
					{ printf("%ld:", lineno); }
				printf("%s", line);
				found++;
			}
		}
	}
	return found;

}
int getln(char *line, int max)
{
	int c, i;

	for (i = 0; i < (max - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
		{ line[i] = c; }
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}
