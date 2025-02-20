#include <stdio.h>

int second_highest(int a[], int length);

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // max2 = 8
    int length = sizeof(a)/sizeof(a[0]);
    int max2 = second_highest(a, length);

    printf("the secont highest is %d\n", max2);

    return 0;
}

int second_highest(int a[], int length)
{
    int max2 = 0;

    return max2;
}