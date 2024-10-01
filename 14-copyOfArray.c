/**
 * Create a copy of an array 
 */

#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);
void print_array(int *array, int length);


int main(){
    int a1[] = {1,2,3,4,5,6};

    print_array(a1,6);
    print_array(array_copy(a1,6),6);

    return 0;
}

int *array_copy(int *array, int length){
    int *c = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++)
        c[i] = array[i];
    
    return c;
}

void print_array(int *array, int length){
    for (int i = 0; i < length; i++)
        printf("%d%c ",array[i],(i==length-1)?'\n':',');
}