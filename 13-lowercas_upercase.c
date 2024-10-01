/**
 * Flip (retourner) a string's lowercase characters to uppercase and vice versa
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s){
     int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (isupper(s[i])){
            s[i] = tolower(s[i]);
        }else if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
}

int main(){

    char s[] = "abcdABCD";

    // int length = strlen(s);

    // for (int i = 0; i < length; i++)
    // {
    //     if (isupper(s[i])){
    //         s[i] = tolower(s[i]);
    //     }else if(islower(s[i])){
    //         s[i] = toupper(s[i]);
    //     }
    // }
    letter_flip(s);
    printf("%s\n",s);

    return 0;
}