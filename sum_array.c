/**
 * the sum of the value in an array
 * https://youtu.be/AhAz6cOl_DA?si=wXDbhiDwiVTJhK2b
 */
#include <stdio.h>
int sumArray(int array[],int length);
int main(){
    int my_array[] = {1,2,3,4,5,6,7,8,9};//9
    int a1[] = {2,4,3,56,7},//5
        a2[] = {8,9,0,11,33,4},//6
        a3[] = {-1,-2,3,44,-9};//5

    // int sum = 0;
    // int length = 9;
    
    // for (int i = 0; i < length; i++){
    //     sum += my_array[i];
    // }
    printf("sum = %d\n",sumArray(my_array,9));
    printf("sum1 = %d\n",sumArray(a1,5));
    printf("sum2 = %d\n",sumArray(a2,6));
    printf("sum3 = %d\n",sumArray(a3,5));
    return 0;
}

int sumArray(int array[],int length){
    int sum = 0;

    
    for (int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum;
}