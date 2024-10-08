#include <stdio.h>
#include <ctype.h>
#include <string.h>
void is_ALPHA(){
    char alpha[]="qwerQWER_)123~";
    int i=0;
    printf("--------------------------------------------------------------\n\n");
    printf("isalpha() - Vérifie si le caractère est une lettre (a-z, A-Z).\n");
    while (alpha[i])
        printf("%c | %d\n",alpha[i],isalpha(alpha[i])?1:0),i++;
    printf("\n");
}

int main()
{
    is_ALPHA();

    return 0;
}
