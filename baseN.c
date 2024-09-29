#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* revers(char* s);
char *toBin(int n);



int main(){

    // int n=16,q=1;
    // char* r = malloc(64*sizeof(char)) ;// 5bit

    // int i=0;    // index

    // while (n>=2) 
    // {
    //     q = n/2;
    //     r[i] = n%2 + '0'; // + '0' to convert int in character asscii
    //     n = q;
    //     i++;
    // }
    // r[i] = q + '0';

    // printf("%s, => %s\n",r,revers(r));
    
/*----------------------------------------------------------*/
    printf("%s\n",toBin(176));
    // revers(r);

    return 0;
}


/*----------------------------------------------------------*/
/*fonction*/
char* revers(char* s){
    int i=0,j=strlen(s)-1;    //index
    char *tmp = NULL;
    tmp = malloc(64*sizeof(char));


    while(s[i]){
        // printf("[%c]\n",s[i]);
        tmp[i]=s[j];
        i++,j--;
    }
    return tmp;
    free(tmp);
}

char *toBin(int n){
    int q=1;
    char* r = malloc(64*sizeof(char)) ;// 64bit

    int i=0;    // index

    while (n>=2) 
    {
        q = n/2;
        r[i] = n%2 + '0'; // + '0' to convert int in character asscii
        n = q;
        i++;
    }
    r[i] = q + '0';

    return revers(r);
}