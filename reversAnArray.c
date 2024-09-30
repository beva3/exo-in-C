/**
 * revers an array
 */
#include <stdio.h>
void print_tab(int tab[],int length);
void revers_tab(int tab[], int length);

int main(){
    int myArray[] = {1,2,3,4,5,6,7,8,9}; //9
    int a1[] = {3,4,1,2,3,4}; //6
    int a2[] = {9,4,5,2,7,8,9,5}; //8
    // int length = 9;
    
    print_tab(myArray,9),revers_tab(myArray,9),print_tab(myArray,9);
    print_tab(a1,6),revers_tab(a1,6),print_tab(a1,6);
    print_tab(a2,8),revers_tab(a2,8),print_tab(a2,8);

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