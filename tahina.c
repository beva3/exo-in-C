#include <stdio.h>

double U_n(int n){
    return (n==0)? 3: 2/(1+U_n(n-1));
}

int main(){
    int i = 0;
    for(i=0; i<=200; i++)
        printf("U[%03d] = %04g\n",i,U_n(i));
    return 0;
}