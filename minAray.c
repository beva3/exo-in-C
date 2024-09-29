#include <stdio.h>
/**
 * find the minimum NUmber in Array 
 * that means: 
 *  manao comparaison
 *      tazomy foana izay kely
 *   toizay koa raha mitady max
 */

int find_min(int array[], int length);


int main(){

    int myArray[] = {3,-1,1,8};
    int array2[] = {1,4,-10,23,-9,0};
    int array3[] = {1,0,-10,3,-9,-19};
    int array4[] = {10,23,-10,23,-90,0};
    int array5[] = {0,0,0,0,0,0};
    // int min = myArray[0];

    // for(int i = 1; i<4; i++){
    //     if(myArray[i] < min)
    //         min = myArray[i];   // store the small, tazomy foana izay kely
    // }

    // printf("The min found %d\n",min);
    printf("The min found %d\n",find_min(myArray,4));
    printf("The min found in 2 %d\n",find_min(array2,6));
    printf("The min found in 3 %d\n",find_min(array3,6));
    printf("The min found in 4 %d\n",find_min(array4,6));
    printf("The min found in 5 %d\n",find_min(array5,6));
    return 0;
}

int find_min(int array[], int length){
    int min = array[0];

    for(int i = 1; i<length; i++){
        if(array[i] < min)
            min = array[i];   // store the small, tazomy foana izay kely,
            // tazomy izay lehibe raha hitady max
    }
    return min;
}