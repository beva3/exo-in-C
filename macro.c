#include <stdio.h>
#define MACRO(a,b) a*b
#define MULT(a,b) (a) * (b)

void macro_test(); 
void mult_test();
int main()
{
	macro_test();
	mult_test();
	return 0;
}
void macro_test() 
{
	printf("1- MACRO(2,3)) 		%d\n",MACRO(2,3));
	printf("2- MACRO(1+1,2+1)	%d\n",MACRO(1+1,2+1));
}
void mult_test()
{
	printf("1- MULT(2,3)) 		%d\n",MULT(2,3));
	printf("2- MULT(1+1,2+1)	%d\n",MULT(1+1,2+1));
}
