#include <stdio.h>

int fact(int n){
    int factN = 1;
    
    for (int i = 1; i <= n ; ++i)
    {
        factN *= i;
    }
    
    return factN;
}

int main(int argc, char const *argv[])
{
    int n = 5;
    printf("the factorial of %d is %d \n",n,fact(n));
    return 0;
}
