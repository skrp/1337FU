// KR 40
// struct 
#include <stdio.h>

int main()
{

	struct point 
	{
		int x;
		int y;
	};

	struct point pt;
	pt.x = 202;
	pt.y = -139;

	struct point max = {320,200};

	printf("(%d,%d)\n", pt.x, pt.y);
	printf("(%d,%d)\n", max.x, max.y);

	return 0;
}
