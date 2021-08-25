// KR 27
// pass pointers to a function BY REFERENCE
// interchange contents 2 variables in main
#include <stdio.h>
void swap(int *pa, int *pb);

int main()
{
	int x=1, y=2, z[10];
	int *ip;
	printf("ip is a pointer to type:int\n");

	ip = &x;
	printf("ip point to x\n");
	y = *ip;
	printf("y is now 1\n");

	printf("x=%d\nip=%d mem=%p\n", x, *ip, &ip);

	*ip = 0;
	printf("x is now 0\n");

	*ip += 10;
	printf("y=%d\nip=%d mem=%p\n", y, *ip, &ip);

	ip = &z[0];

	z[0] = 33;
	z[1] = 88;
	z[2] = 99;
	printf("ip=%d\n",*ip);
	printf("ip=%d\n",++*ip);
	printf("ip=%d\n",z[1]++);

	int *a;
	int *b;

	a = &x;
	b = &y;

	printf("a=%d\tb=%d\n",*a,*b);
	swap(&x, &y);
	printf("a=%d\tb=%d\n",*a,*b);


	return 0;
}
void swap(int *pa, int *pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
