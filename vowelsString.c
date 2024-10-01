/**
 * counting the vawels in a string 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowels_count(char *s);

int main(){
    char s1[] = "randrianantoanina";
    char s2[] = "aaaaaaaaaa";

    // int count = 0;
    // for (int i = 0; i < strlen(s1); i++)
    // {
    //     switch (toupper(s1[i]))
    //     {
    //         case 'A':
    //         case 'E':
    //         case 'I':
    //         case 'O':
    //         case 'U':
    //             count++;
    //     }
    // }
    
    printf("%d\n",vowels_count(s1));
    printf("they are %d vowels \n",vowels_count(s2));

    return 0;
}

int vowels_count(char *s){
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}