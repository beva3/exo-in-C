#include <stdio.h>


/**
 * tri a bule
 */
void sawp(int *a,int *b);
void print_array(int array[], int length);

int main(){

    int a[]= {1,5,2,3,4};
    int length = 5;

    print_array(a,length);

    for(int i=0; i<length; i++){
        for(int j=0; j<(length-1); j++){
            if(a[j]>a[j+1])
                sawp(&a[j], &a[j+1]);
        }
    }
    printf("After ...\n");
    print_array(a,length);

    return 0;
}

void sawp(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_array(int array[], int length){
    for(int i=0; i<length; i++)
        printf("%d%c",array[i],(i==length-1)? '\n' :' ');
}