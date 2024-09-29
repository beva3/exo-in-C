#include <stdio.h>

int sum(int start, int end){
    // init s =0
    int s = 0; 

    for (int i = start; i <= end; ++i)
    {
        // s = s + i;
        printf("s = %d + %d\n",s ,i);
        s = s+i;
    }

    return s;
}

int sumAr(int start, int end){
    return 0.5 * (start + end) * (end - start + 1);
}

int main(){

    int start  = 1, end = 9;
    printf("the sum : %d to %d is %d\n",start,end,sum(start,end));
    printf("the sum : %d to %d is %d\n",start,end,sumAr(start,end));

    return 0;
}