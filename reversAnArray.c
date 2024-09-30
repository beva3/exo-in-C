/**
 * revers an array
 */
#include <stdio.h>
void print_tab(int tab[],int length);
void revers_tab(int tab[], int length);

int main(){
    int myArray[] = {1,2,3,4,5,6,7,8,9};
    int length = 9;
    
    print_tab(myArray,length);
    printf("And after ....\n");

    revers_tab(myArray,length);
    
    print_tab(myArray,length);

    return 0;
}

/* **************************************************************** */

// the finctoin that print the value of tab
void print_tab(int tab[],int length){
    for (int i = 0; i < length; i++){
        printf("%d %c",tab[i],(i==length - 1)? '\n' : ' ');
    }
}

// the focntion reverst the value of tab
void revers_tab(int tab[], int length){

    int tmp = 0;
    for (int i = 0; i < (length /2); i++){
        tmp = tab[i];
        tab[i] = tab[length-1-i];
        tab[length-1-i] = tmp;
    }
}