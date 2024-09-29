#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char ch){
    // this character is alpha or not
    printf("is alpha\n");
    return (ch >= 'a' && ch <='z' || ch >= 'A' && ch <='Z') ? true : false;
}

int main(){
    
    char ch = ' ';

    printf("%c %d\n",ch,isAlpha(ch));

    return 0;
}