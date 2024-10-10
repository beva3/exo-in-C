#include <stdio.h>
#include <ctype.h>

/*
 *	ctype.h
 *		tolower()
 *		toupper()
 *
 * */

int main(){
    char c = 'A';
    printf("hello brother this is a test\n");

    printf("tolower(\"%c\") = %c\n",c,tolower(c));
    printf("toupper(\"%c\") = %c\n",tolower(c),toupper(c));

    return 0;
}
