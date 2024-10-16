#include <stdio.h>
#include <stdbool.h>

bool is_prim(int n);
void print_isPrim(int n);

int main(){
    int n = 67;

    print_isPrim(n);

    return 0;
}

void print_isPrim(int n){
    (is_prim(n))
        ?printf("%d is prim\n",n)
        :printf("%d is not prim\n",n);
}

bool is_prim(int n){
    int i = 2;

    /**
     * n is prim if only : n%1 == 0 and n%n == 0,
     *      ie : if m, n%m != 0,
     *                 n%m == 0 <=> m = only (1,n)
     */
    printf("Is premier : ...\n");
    // while(i<=n && n%i != 0) {
    while(i*i<=n && n%i != 0) {
        /**
         * PRINCIPE : i<=n && n%i != 0
         * BUT, IF N IS VERY LARGE, THE LOOP MUST ...
         * SO : IF I<= RACINE2(I)
         */
        printf("%d | %d [%d]\n",n,i,n%i);
        i++;
    }
    return (i*i > n && n > 1) ? true : false;
}