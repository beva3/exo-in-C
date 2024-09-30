/**
 * average of an array : the barycentre
 */
#include <stdio.h>

double sumArray(double array[],int length);
double average_array(double array[],int length);

int main(){

    double  arr1[] = {5.2,9.3,5,4.1},
            arr2[] = {3,4.5,12,17.5,6};
    

    printf("sum = %.2lf\n",average_array(arr1,4));
    printf("sum = %.2lf\n",average_array(arr2,5));

    return 0;
}

double sumArray(double array[],int length){
    double sum = 0;

    
    for (int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum;
}

double average_array(double array[],int length){
    return sumArray(array,length)/length;
}
