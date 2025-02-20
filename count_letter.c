#include <stdio.h>
#include <string.h>
#include <ctype.h>
int count_alpha(char *string);
int main()
{
    char string[] = "hello world, how are you, i'm fine and you ...?";
    int count_letter = 0;
    count_letter = count_alpha(string);
    printf("number letter : %d\n", count_letter);
    return 0;
}

int count_alpha(char *string){
    int count =0;
    for (int  i = 0; i < strlen(string); i++)
    {
        if(isalpha(string[i])) count ++;
    }
    
    return count;
}