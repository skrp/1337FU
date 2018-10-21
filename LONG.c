// LONG - c long form  /////////////////////////
#include <stdio.h>
#define MAX 10
void ptr(int *, int *);
void arr(int *);
int str_ln(char *);
void prt_str(char *);
void wrap_fn(void (*fn_ptr)());
void fn_ptr1();
void fn_ptr2();
void add(int, int);
void sub(int, int);
void div(int, int);
void mul(int, int);
int main(int argc, char *argv[])
{
 	int *c;
	int cnt=0, i=0;
	int a=10, b=3; 
// ARGS ///////////////////////////////////////
	while (--argc>0)
		{ printf("arg[%d] : %s\n", ++cnt, *(++argv)); }
// VAR ADDR ///////////////////////////////////
	c=&b;
	printf("a_addr=%p a_val=%d\nb_addr=%p b_val=%d\nc_addr=%p c_val=%d\n",
		(void*)&a,a, (void*)&b,b, (void*)c, *c);
// VAR changed in fn  /////////////////////////
	ptr(&a, &b);
	printf("a+=1 = %d\nb*=2 = %d\n", a, b);
// PTR arithmetic /////////////////////////////
	*c+=4;
	printf("*c+=4 = %d\n++(*c) = %d\n", *c, ++(*c));
// ARRAY  /////////////////////////////////////
	int d[MAX];
	int *e;
	int z=0;
	char *f="ducki&dicki", *g="fktheworldz";
// loop ///////////////////////////////////////
	while (z<MAX)
		{ d[z]=z*MAX; z++; }
	e=d;
	printf("inc__ptr *(e+5) = %d\n", *(e+5));
	e+=9;
	printf("int_ptr e+=9 = %d\n", *e);
// array change in fn /////////////////////////
	arr(d);
	printf("fn array change %d\n", *(d+3));
// STRINGS  //////////////////////////////////
	printf("constant %d\nptr string %d\nstrln(f+4) %d\n", str_ln("fkutoo"),
		str_ln(f), str_ln(f+4));
// ptr array //////////////////////////////////
	i=0;
	char *day[]={"monday","tues","wednesday","thurs","friday","sat","7"};
	prt_str(day[2]);
	printf("%c\n", day[3][2]);
// multi-d array //////////////////////////////
	int list[3][5] = {
		{8,3,0,0,0},
		{0,1,3,3,7},
		{21,23,24,25,26}};
	printf("%d\n", list[2][3]);
// FUNCTION ///////////////////////////////////
	printf("fn points point to start of executable code\n");
	printf(" *a[N] = an N-element array of pointers\n");
	printf(" (*a)[N] = pointer to an N-element array\n");
	printf(" *f() = fuction returning a pointer\n");
	printf(" (*f)() = pointer to a function\n");
// function pointers ///////////////////////////
	void (*fn_ptr)(int *, int *) = ptr;
	fn_ptr(&a, &b);
// function passed as pointers ////////////////
	wrap_fn(fn_ptr1);
	wrap_fn(fn_ptr2);
// dispatch table /////////////////////////////
	int ch;
	void(*dispatch_table[])(int, int) = {add, sub, div, mul};
// input //////////////////////////////////////
	printf("enter 0-3: 0 add. 1 sub. 2 div. 3 mul\n");
	scanf("%d", &ch);
// kill ///////////////////////////////////////
	if (ch == 0 | ch == 1 | ch == 2 | ch == 3)
		{printf("your choice = %d\n", ch);}
	else
		{ printf("FAIL 0 - 3\n"); return 1; }
	dispatch_table[ch](a, b);
// BITWISE /////////////////////////////////////
	printf("a = %d b = %d\n", a, b);
	printf("a|b = %d\n", a|b);
	printf("a^b = %d\n", a^b);
	printf("a&b = %d\n", a&b);
	printf("b=~b = %d\n",b=~b);
	printf("a>>1 = %d\n", a>>1);
	printf("a<<1 = %d\n", a<<1);
// YAY ////////////////////////////////////////
	printf("++LVL_@_MASTER\n");
	return 0;
}
// VAR ADDR ///////////////////////////////////
void ptr(int *x, int *y)
{
	*x+=1; *y*=2;
	printf("fn_a_addr=%p\nfn_b_addr=%p\n", (void*)x, (void*)y);
}
// ARRAY  /////////////////////////////////////
void arr(int *a)
{
	a[3] = 33;
	printf("fn_arr_change=%d\n", *(a+3));
}
// STRINGS  //////////////////////////////////
int str_ln(char *p)
{
	int n;
// iterate  //////////////////////////////////
	for (n=0; *p!='\0'; p++)
		n++;
	return n;
}
void prt_str(char *c)
{
	while(*(c) != '\0')
		printf("%c", *(c++));
	printf("\n");
}
// function passed as pointers ////////////////
void wrap_fn(void (*fn_ptr)())
	{fn_ptr();}
void fn_ptr1()
	{printf("fn_ptr1\n");}
void fn_ptr2()
	{printf("fn_ptr2\n");}
// dispatch table /////////////////////////////
void add(int a, int b)
	{printf("add %d + %d = %d\n", a, b, a+b);}
void sub(int a, int b)
	{printf("sub %d - %d = %d\n", a, b, a-b);}
void div(int a, int b)
	{printf("div %d / %d = %d\n", a, b, a/b);}
void mul(int a, int b)
	{printf("mul %d * %d = %d\n", a, b, a*b);}
