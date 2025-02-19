#include <stdio.h>
#include <string.h>

int count_word(char *word);

int main()
{
    char *word = "hello     you je suis";
    int count = count_word(word);
    printf("count world %d\n", count);
    // printf("%s\n", strchr("qwerty",'e'));

    return 0;
}

int count_word(char *word)
{
    int len_word = strlen(word);
    char *non_word = " .,";
    int count = 0;

    for (int i = 0; i < len_word; i++)
    {
        while (i < len_word)
        {
            if (strchr(non_word, word[i]))
            {
                break;
            }
            i++;
        }
        printf("index = %d\n", i);
        count++;
        while (i<len_word)
        {
            if (!strchr(non_word,word[i]))
            {
               break;
            }
            i++;
            
        }
        
        
    }

    return count;
}