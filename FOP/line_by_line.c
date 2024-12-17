#include <stdio.h>

int test(){
    return 2;
    printf("wirking test...\n\n");
}
int main(){
    printf("Instruction after return\n\n");
    test();
    return 0;
}