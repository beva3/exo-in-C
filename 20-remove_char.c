#include <stdio.h>
/**
 * Removing all occurrences of a character from a string ,
 * tutoriel
 */

void remove_char(char *string, char r);

int main(){
    char me[] = "RaphaelR";
    remove_char(me,'R');
    return 0;
}

void remove_char(char *string, char r){
    int pos = 0;
    while (string[pos] !='\0')
    {
        if (string[pos] == r){
            int new_pos = pos;
            string[new_pos] = string[new_pos + 1];
            printf("remove : %c in %d  => %s\n",string[pos], pos,string);
        }
        pos++;
    }
    
}