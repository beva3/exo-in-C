#include <stdio.h>

int pgcd(int a, int b);
int ppcm(int a, int b);
void swap(int *a, int *b);
void print_pgcd(int a, int b);
void print_ppcm(int a, int b);

int main(){
    print_pgcd(5,4);
    print_pgcd(4,5);
    print_ppcm(5,4);
    print_ppcm(4,5);
    return 0;
}

int pgcd(int a, int b){

    if(a<b) swap(&a,&b);    

    /**
     * a = 100
     * b = 60
     * 
     * 100 = 60.1 + 40
     * 060 = 40.1 + 20
     * 040 = 20.2 + 00
     */

    int rest = 1;
    while (b != 0)
    {
        rest = b;
        b = a%b;
        a = rest;
    }
    return a;
}
int ppcm(int a, int b){
    /**
     * ppcm.pgcd(a,b) = a.b
     */
    return (a*b)/pgcd(a,b);
}
void print_pgcd(int a, int b){
    printf("PGCD(%3d , %3d)  =  %3d\n",a,b,pgcd(a,b));
}
void print_ppcm(int a, int b){
    printf("PPCM(%3d , %3d)  =  %3d\n",a,b,ppcm(a,b));
}
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}