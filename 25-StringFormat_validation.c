#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_postal_code(char postal_code[]);

int main()
{
    char code1[] = "L8K 4B6";
    if(is_postal_code(code1))
        printf("%s is postal code\n",code1);
    else
        printf("%s is not postal code\n",code1);
    return 0;
}

bool is_postal_code(char postal_code[]){
    if(strlen(postal_code) != 7) return false;
    if( !isalpha(postal_code[0]) && 
        !isalpha(postal_code[2]) &&
        !isalpha(postal_code[5]))
        return false;
    
    if( !isdigit(postal_code[1]) &&
        !isdigit(postal_code[4]) &&
        !isdigit(postal_code[6])) 
        return false;
    if(!isspace(postal_code[3]))  return false;

    return true;
}