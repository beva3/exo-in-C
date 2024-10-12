#include <stdio.h>


/**
 * tri a bule
 */
void sawp(int *a,int *b);
void bubble_sort(int a[], int length);
void print_array(int array[], int length);

void test_other();

int main(){

    int a[]= {1,5,2,3,4,34,56,-7,33};
    int length = sizeof(a)/sizeof(a[0]);

    print_array(a,length);

    // for(int i=0; i<length; i++){
    //     for(int j=0; j<(length-1); j++){
    //         if(a[j]>a[j+1]) // abcd, 1234
    //             sawp(&a[j], &a[j+1]);
    //     }
    // }

    bubble_sort(a,length);

    printf("After ...\n");
    print_array(a,length);

    // test_other();

    return 0;
}

void sawp(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int a[], int length){
    for(int i=0; i<length; i++){
        for(int j=0; j<(length-1); j++){
            if(a[j]>a[j+1]) // abcd, 1234
                sawp(&a[j], &a[j+1]);
        }
    }
}

void print_array(int array[], int length){
    for(int i=0; i<length; i++)
        printf("%d%c",array[i],(i==length-1)? '\n' :' ');
}

void test_other(){
    int a[]= {0,1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a)/sizeof(a[0]);
    // printf("%d\n",length);
    for (int  i = 0; i < length; i++)
    {
        print_array(a,length-1-i);
    }
    
}