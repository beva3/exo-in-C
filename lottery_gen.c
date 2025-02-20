#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand (time(NULL));
    int number = 0;
    int numbers[6];
    bool unique = true;

    for (int  i = 0; i < 6; i++)
    {
        do
        {
            number = rand() % 59 + 1;
            unique = true;
            for (int  j = 0; j < i; j++)
                if (numbers[j] == number) unique = false; 
              
        } while (!unique);
        numbers[i] = number;
        
        printf("number : %d\n", number);
    }
    

    return 0;
}