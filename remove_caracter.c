#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool remove_char(char *s, int position);

int main()
{
    char s[] = "12345-12345";
    // bool r1 = remove_char(s, 20);

    // if (r1) printf ("Char removed fro string!\n");
    // else printf("char not removed from string !\n");

    bool r2 = remove_char(s, 5);
    if (r2) printf ("Char removed fro string!\n");
    else printf("char not removed from string !\n");
    printf("result = %s\n", s);


    return 0;
}

bool remove_char(char *s, int position)
{
    int length = strlen(s);
    if (position >= length)
        return false;

    int i = 0;

    for (i = position; i < length; i++)
    {
        s[i] = s[i + 1]; // shift
    }
    return true;
}