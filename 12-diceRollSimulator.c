/**
 * manao random
 * Simulateur de lancer de dés
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    int dice = 10,
        roll = 0;
    
    for (int  i = 0; i <= dice; i++)
    {
        roll = rand()%6 + 1  ; // 1 a 6 
        printf("dice %d : %d\n",i,roll);
    }
    
    return 0;
}