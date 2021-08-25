// KR 35
// simple grep
#include <stdio.h>
#include <string.h>

#define MAX 1000

int getln(char *line, int max);

int main(int argc, char *argv[])
{
	char line[MAX];
	int found = 0;

	if (argc != 2)
		{ printf("ARG1 pattern-2-find\n"); }
	else
	{
		while (getln(line, MAX) > 0)
		{
			if (strstr(line, argv[1]) != NULL)
			{
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
