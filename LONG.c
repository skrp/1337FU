// LONG - c long form ////////////////////
// LIB ////////////////////////////////////
#include <stdio.h>
// DEF ///////////////////////////////////
#define MAX 10
#define RED   "\x1b[31m"
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
// fns ///////////////////////////////////
void ptr(int*, int*);
void arr(int *);
int str_ln(char*);
void prt_str(char*);
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
  int cnt=0, i=0, a=10, b=3;
// ARGS //////////////////////////////////
  while (--argc>0)
    { printf("argv[%d]:%s\n", ++cnt, *(++argv)); }
// address of variable ///////////////////
  c=&b;
  printf("a_addr = %p a_val = %d\nb_addr = %p b_val = %d\nc_addr = %p c_val = %d\n",
         (void*)&a, a, (void*)&b, b, (void*)c, *c); 
// varible changed in fn /////////////////
  ptr(&a, &b);
  printf("a+=1 = %d\nb*=2 = %d\n", a, b);
// PTR ///////////////////////////////////
  *c=4;
  printf("*c=4 = %d\n++(*c) = %d\n", *c, ++(*c));
// ARRAY /////////////////////////////////
  int d[MAX];
  int *e;
  int z=0;
  char *f="fkdaworld", *g="fkuztoozz";
// loop //////////////////////////////////
  while (z<MAX)
    {d[z]=z*MAX; z++;}
  e+=9;
  printf("int_ptr+=9 = %d\n", *e);
// array change in fn ////////////////////
  arr(d);
  printf("fn array change %d\n", *(d+3));
// STRING ////////////////////////////////
  printf("constant %d\nptr string %d\nstr_ln(f+4) %d\n", str_ln("fkutoo"),
         str_ln(f), str_ln(f+4));
// pointer array /////////////////////////
  i=0;
  char *day[]={"monday", "tues", "wednesday", "thurs", "fry 420 day", "SAT", "7"};
  prt_str(
// multi-d array /////////////////////////
// FUNCTION //////////////////////////////
// function pointer //////////////////////
// function passed as pointers ///////////
// dispatch table ////////////////////////
// BITWISE ///////////////////////////////
// YAY ///////////////////////////////////

}
// address of variable ///////////////////
// ARRAY /////////////////////////////////
// STRING ////////////////////////////////
// iterate ///////////////////////////////
// function passed as pointers ///////////
// dispatch table ////////////////////////
