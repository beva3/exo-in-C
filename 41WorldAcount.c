#include <stdio.h>
#include <string.h>

/**
 * char *str_chr = strchr("Raphael",'p');
 *      Output : "phael"
 *
 *      if the caracter is fond:
 *          teturn : ...
 *      if not found : it
 *          return NULL
 */
int word_count(char *s);
int word_count_new(char *string);

int main()
{
    char *my_string = "hello world, how are you.    And what's up";
    printf("count : %d\n", word_count(my_string));
    printf("count : %d\n", word_count_new(my_string));
    return 0;
}

int word_count(char *s)
{
    int count = 1;
    while ((*s))
    {
        if ((*s) == ' ')
        {
            count++;
        }
        *s++; // from 0 to the end of string
        // printf("s = %p\n",s);
    }

    return count;
}
int word_count_new(char *string)
{
    int len = strlen(string);
    char *nonWord = " ,;.";
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        while (i < len)
        {
            if (strchr(nonWord, string[i]))
            {
                // printf("%c strchr(nonWord, string[i]) NOT NULL\n", string[i]);
                break;
            }
            i++;
        }
        count ++;

        while (i < len)
        {
            if (!strchr(nonWord, string[i]))
            {
                // printf("%c strchr(nonWord, string[i])  NULL\n", string[i]);
                break;
            }
            i++;
        }
        

        
    }

    return count;
}