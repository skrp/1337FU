// KR 28
// count a string in forms
// 	CONSTANT
// 	ARRAY
// 	POINTER
#include <stdio.h>
int strln(char *s);

int main()
{
	char a[100] = "FUCK U";
	char *vv = "FK DA WORLD MUFFkr";
	int p = 0;

	p = strln("kick azz n konkUR");
	printf("%d\tkick azz n konkUR\n", p);
	p = strln(a);
	printf("%d\t%s\n", p, a);
	p = strln(vv);
	printf("%d\t%s\n", p,vv);
       	return 0;
}
int strln(char *s)
{
	int n;

	for (n=0; *s != '\0'; s++)
		{n++;}
	return n;
}
