#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * 
 *     isalpha() - Vérifie si le caractère est une lettre (a-z, A-Z).

    isdigit() - Vérifie si le caractère est un chiffre (0-9).

    isalnum() - Vérifie si le caractère est alphanumérique (lettre ou chiffre).

    islower() - Vérifie si le caractère est une lettre minuscule.

    isupper() - Vérifie si le caractère est une lettre majuscule.

    isspace() - Vérifie si le caractère est un espace blanc (espace, tabulation, nouvelle ligne, etc.).

    tolower() - Convertit une lettre majuscule en minuscule.

    toupper() - Convertit une lettre minuscule en majuscule.
 */

void is_ALPHA(){
    char alpha[]="qwerQWER_)123~";
    int i=0;
    printf("--------------------------------------------------------------\n\n");
    printf("isalpha() - Vérifie si le caractère est une lettre (a-z, A-Z).\n");
    while (alpha[i])
        printf("%c | %d\n",alpha[i],isalpha(alpha[i])?1:0),i++;
    printf("\n");
}

void is_DIGIT(){
    char alpha[]="123!@#as";
    int i=0;
    printf("--------------------------------------------------------------\n\n");
    printf("isdigit() - Vérifie si le caractère est un chiffre (0-9)\n");
    while (alpha[i])
        printf("%c | %d\n",alpha[i],isdigit(alpha[i])?1:0),i++;
    printf("\n");
}

int main()
{
    is_ALPHA();
    is_DIGIT();

    return 0;
}
