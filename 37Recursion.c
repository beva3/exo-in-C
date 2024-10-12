#include <stdio.h>

/**
 * Sum The First N Natural Numbers Using Recursion 
 * 1, 2, 3, 4, 5, 6
 * 1+2
 * 1+2+3
 * 1+2+3+4
 * 1+2+3+4+5
 */

int sum(int n);

int main(){

    int n = 9;
    printf("sum of the %d natural number is %d\n",n,sum(n));
    return 0;
}

int sum(int n){
    if(n>0) return n + sum(n-1);
    else return 0;
}