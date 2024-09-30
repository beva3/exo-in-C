/**
 * Count the Occurrences of a value in a Array
 * mijery izay miverina no tiana atongavana
 */

#include <stdio.h>

int occurrence(int array[],int lenght,int to_find){

    int count = 0;

    for(int i=0; i<5; i++){
        // printf("array[%d] = %d\n",i, array[i]);
        if(array[i] == to_find){
            count++;
            // printf("found %d incremented count to %d\n",to_find,count);
            /**
             * manisa vao mampiseo
             */
        }
    }

    return count;
}

int  main(){

    int myArray[] = {6,4,6,6,7};
    // int count = 0;
    // int to_Find = 6;

    // for(int i=0; i<5; i++){
    //     printf("myArray[%d] = %d\n",i, myArray[i]);
    //     if(myArray[i] == to_Find){
    //         count++;
    //         printf("found %d incremented count to %d\n",to_Find,count);
    //     }
    // }

    printf("# %d\n",occurrence(myArray,5,6));

    return 0;
}