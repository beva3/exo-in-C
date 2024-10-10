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
void rotate_left(int array[], int length,int n);

void rotate_right_once(int array[], int length);
void rotate_right(int array[], int length,int n);

void print_array(int array[], int length);

int main(){
    int a1[] = {1,2,3,4,5,6};

    // print_array(a1,6);
    // rotate_left_once(a1,6);
    // print_array(a1,6);

    // rotate_left_once(a1,6);
    // print_array(a1,6);

    // rotate_left_once(a1,6);
    // print_array(a1,6);

    // rotate_left_once(a1,6);
    // print_array(a1,6);

    // rotate_left_once(a1,6);
    // print_array(a1,6);

    // rotate_left_once(a1,6);
    
    print_array(a1,6);
    // rotate_right_once(a1,6);
    rotate_right(a1,6,3);
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

void rotate_left(int array[], int length,int n){
    for(int i=0; i<n; i++)
        rotate_left_once(array,length);

}

void print_array(int array[], int length){
    for(int i=0; i<length; i++)
        printf("%d%c",array[i],(i == length-1) ? '\n' :' ');
}

void rotate_right_once(int array[], int length){
    int tmp = array[length-1];
    printf("Rotate an array left once...\n");
    for(int i = length-2; i>=0; i--)
        array[i+1] = array[i]; // a[2] <= a[1]
    array[0] = tmp;
}

void rotate_right(int array[], int length,int n){
    for(int i=0; i<n; i++)
        rotate_left_once(array,length);

    /**
     * 1234
     *  2341
     *   3412
     */
}