#include <stdio.h>
/**
 * Removing all occurrences of a character from a string ,
 * tutoriel
 */

void remove_char(char *string, char r);
void print_array(char *array);

int main(){
    char me[] = "RaphaelR";
    remove_char(me,'R');
    return 0;
}

void remove_char(char *string, char r){
    print_array(string);
    int pos = 0;
    while (string[pos] !='\0')
    {
        if (string[pos] == r){
            int new_pos = pos;
            while (string[new_pos] !='\0')
            {
                string[new_pos] = string[new_pos + 1];
                printf("remove : %c in %d  => %s\n",string[pos], pos,string);
                new_pos++;
            }
        }
        pos++;
    }

    print_array(string);

}

void print_array(char *array){
    int i=0;
    while (array[i] != '\0')
    {
        printf("%c %d\n",array[i],i);
        i++;
    }
    
}