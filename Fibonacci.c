#include <stdio.h>
/**
 * 0,1,1,2,3,5,8,13,....n 
 * Fib_n = Fib_n-1 + Fib_n-2
 * Fib_0 = 0
 * Fib_1 = 1
 * Fib_2 = Fib_0 + Fib_1
 */

int fib(int n);

int main(){
    int t_0 = 0,t_1 = 1, next_term = 0;
    int lim = 20;

// iterative solutoin

    for (int i = 2; i < lim; i++)
    {
        next_term = t_0 + t_1;
        printf("%d%c ",next_term,(i == lim -1)? '\n':',');
        t_0 = t_1;
        t_1 = next_term;
    }

    printf("\n");

    for (int i = 0; i < lim; i++)
    {
        printf("%d%c ",fib(i),(i == lim -1)? '\n':',');
    }
    
    printf("fib(7) = %d\n",fib(7));
    
    return 0;
}

// recursive solution
int fib(int n){
    if(n>1) return fib(n-1) + fib(n-2);
    else if(n == 1) return 1;
    else if(n == 0) return 0;
    else {
        printf("Error: n must be >= 0\n");
        return -1;
    }
}