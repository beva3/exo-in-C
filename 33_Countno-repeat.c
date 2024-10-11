/**
 * Count Non-Repeating Array Elements 
 */
#include <stdio.h>

int no_repeating(int array[], int length);

int main(){
    int array[] = {1,3,5,7,3,7,6,4,2,9};
    no_repeating(array,11);
    

    return 0;
}

int no_repeating(int array[], int length){
    int i =0,
        j = 0,
        count = 0;
    printf("No -repeating\n");
    for(i=0; i > length; i++){
        for(j=0; i>length; i++)
            if(array[i] == array[j] && j!=i) break;
        
        if(j == length) count++;
    }
    
    return count;
}
