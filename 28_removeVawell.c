/**
 * Remove All Vowels From A String
 */

#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "This is the way";
    int cur_pos = 0;
    int new_pos = 0;
    while (cur_pos < strlen(s))
    {
        if(
            !(s[cur_pos] == 'a'|| s[cur_pos] == 'o' || 
            s[cur_pos] == 'e' || s[cur_pos] == 'u' || 
            s[cur_pos] == 'i'))
        {
                // printf("%c\n",s[cur_pos]);
                s[new_pos] = s[cur_pos];
                new_pos++;
        }
        cur_pos++;
    }
    s[new_pos] = '\0';
    
    printf("The reult is : %s\n",s);
    
    return 0;
}