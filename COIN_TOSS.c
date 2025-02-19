#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef enum Coin
{
    HEADS,
    TAILS
} Coin;
Coin flipCoin();

int main()
{
    srand(time(NULL));
    Coin My_coen = HEADS;

    for (int  i = 0; i < 10; i++)
    {
       flipCoin() == HEADS ? printf("HEADS\n") : printf("TAILS\n");
        
    }

    return 0;
}
 
Coin flipCoin()
{
    return rand() % 2 ==0 ? HEADS : TAILS;
}