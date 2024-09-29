#include <stdio.h>
/**
 * find the minimum NUmber in Array 
 */

int main(){

    int myArray[] = {3,-1,1,8};
    int min = myArray[0];

    for(int i = 1; i<4; i++){
        if(myArray[i] < min)
            min = myArray[i];   // store the small, tazomy foana izay kely
    }

    printf("The min found %d\n",min);

    return 0;
}