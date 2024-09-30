/**
 * Count the Occurrences of a value in a Array
 * mijery izay miverina no tiana atongavana
 */

#include <stdio.h>

int  main(){

    int myArray[] = {6,4,6,6,7};
    int count = 0;
    int to_Find = 6;

    for(int i=0; i<5; i++){

        if(myArray[i] == to_Find)
            count++;
    }

    printf("# of %ds found : %d\n",to_Find, count);

    return 0;
}