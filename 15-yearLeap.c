/**
 * Determine if a year is a leap year 
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char cmd[] = "cal 2 -m 2024";
    for (int i = 2016; i <= 2200; i++)
    {
        
        if (i%4 == 0)
        {
            sprintf(cmd,"cal -m 2 %d",i);
            system(cmd);
            sleep(1);
        }
    }   
    return 0;
}