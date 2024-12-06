#include <stdio.h>

int main(){
	int a = 5,
	    b = 10;
	printf("a = %d	| %d\n",a,b);
	/*
	 * a++,
	 * ++b
	 */
	printf("(a++) = %d , (++b) = %d\n",(a++) , (++b));
	/* ************************** */
	a=0,b=0;
	for(int i=0; i<11; i++){
		printf("(a++) = %3d	|	(++b) = %3d\n",a++,++b);
	}
	return 0;
}
