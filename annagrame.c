#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * abc
 * a anag(bc)
 *      b anag(c)
 *      c anag(b)
 * b anag(ac)
 * c anag(ab)  
 */

void anag(char st[]);
// void swap_char(char *str,int i_recev, int i_send);
char *start_with(int start, char *str);
int main(){
    char mot[]="qwr";
 
    anag(mot);
    printf("\n");

    return 0;
}

void anag(char st[]){
    size_t len = strlen(st);
    int i =0;
    if(len == 1)  printf("%s",st);
    else{
        // printf("... okaloha ...");
        while(st[i]){
            printf("%c",st[i]);start_with(i,st);
            i++;
        }
    }
}

void swap_char(char *str,int i_recev, int i_send){
    char tmp = str[i_recev];
    str[i_recev] = str[i_send];
    str[i_send] = tmp;
}

char *start_with(int start, char *str){
    char *result = NULL;
    int i=0;
    result = malloc(strlen(str)*sizeof(char));
    // swap_char(str,start,strlen(str) - strlen(str + start));
    while(str[i] != str[start] && i!= start){
        result[i] = str[i];
        i++;
    }
    
    // printf("... okaloha ...\n");
    printf(" r = %s\n",result);
    return result;
}