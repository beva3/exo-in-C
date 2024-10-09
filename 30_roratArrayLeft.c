#include <stdio.h>

/**
 * array before:
 * index : 0 1 2 3 4 5
 * array : 3 9 8 1 7 6
 * array after rotatig once left
 * 
 * index : 0 1 2 3 4 5
 * array : 9 8 1 7 6 3
 * 
 * manakosaka makany ankavia
 */

void rotate_left_once(int array[], int length);
void print_array(int array[], int length);

int main(){
    int a1[] = {1,2,3,4,5,6};

    print_array(a1,6);
    rotate_left_once(a1,6);
    print_array(a1,6);

    return 0;
}

void rotate_left_once(int array[], int length){
    int tmp = array[0];

    printf("Rotate an array left once...\n");

    for (int  i = 0; i < (length - 1); i++)
        array[i] = array[i+1];

    array[length-1] = tmp;
}

void print_array(int array[], int length){
    for(int i=0; i<length; i++)
        printf("%d%c",array[i],(i == length-1) ? '\n' :' ');
}