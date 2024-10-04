#include <stdio.h>

/*-------------------------------------*/
void remove_char(char *s, char c);

int main(){
    char str[] = "raphael";
    remove_char(str,'a');
    return 0;
}

void remove_char(char *s, char c){
    int i=0;
    while (s[i])
    {
        
        printf("[%c]  => [%s] %c\n",s[i],(s[i] == c) ? "remove":"ok",(s[i + 1] != '\0') ? ' ' : '\n');
        
        i++;
    }
    
}