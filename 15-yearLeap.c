/**
 * Determine if a year is a leap year 
 * https://fr.wikipedia.org/wiki/Ann%C3%A9e_bissextile
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

bool is_leap_years(int year);

int main(){
    // char cmd[] = "cal 2 -m 2024";
    // for (int i = 2016; i <= 2200; i++)
    // {
        
    //     if (i%4 == 0)
    //     {
    //         sprintf(cmd,"cal -m 2 %d",i);
    //         system(cmd);
    //         sleep(1);
    //     }
    // }   
    char cmd[] = "cal 2 -m 2024 >> cal";
    int year = 2020;

/**
 * for (int year = 2016; year <= 3000; year++)
    {
        if((year%4 == 0 && year%100 != 0) || (year%400 == 0) ){
        printf("%d is a leap year.\n\n",year);
        }else{
            printf("%d is not a leap year.\n",year);
            sprintf(cmd,"cal -m 2 %d >> cal",year);
            system(cmd);
            // sleep(1);
        }
    }
    that'is teue, without calcul but show,
    its creat a new fil : cal, and store the result of cmd, after you can see the result in this file
 * */  

    for (int year = 2016; year <= 3000; year++)
    {
        if(!is_leap_years(year)){
            sprintf(cmd,"cal -m 2 %d >> CAL",year);
            system(cmd);
            // sleep(1);
        }
    }
    return 0;
}

bool is_leap_years(int year){
    if(year%4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 != 0) return false;
    else return true;
}