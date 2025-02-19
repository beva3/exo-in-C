#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef enum Coin
{
    HEADS,
    TAILS
} Coin;
Coin flipCoen();

int main()
{
    srand(time(NULL));
    Coin My_coen = HEADS;

    for (int  i = 0; i < 10; i++)
    {
       flipCoen() == HEADS ? printf("HEADS\n") : printf("TAILS\n");
        
    }

    return 0;
}
 
Coin flipCoen()
{
    return rand() % 2 ==0 ? HEADS : TAILS;
}