#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int *gener_unic(int start, int end);
void display_tab(int *tab, int len);
int main()
{
    int *t = gener_unic(1,9);
    display_tab(t, 9);

    return 0;
}

int *gener_unic(int start, int end)
{
    int *gen = NULL;
    int len = (end - start + 1);
    int n;
    bool unique = true;

    gen = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
        gen[i] = 0;

    srand(time(NULL));
    for (int  i = 0; i < len; i++)
    {
        do{
            n = rand() % (end - start + 1) + start;
            unique = true;
            for(int j = 0 ; j < i ; j++)
                if (gen[j] == n)
                    unique = false;
        }while(!unique);
        gen[i] = n;
    }

    return gen;
}

void display_tab(int *tab, int len)
{
    for (int  i = 0; i < len; i++)
        printf("%d%c", tab[i], i == len -1 ? '\n':' ');
    
}