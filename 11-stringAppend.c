/**
 * String append : concatenatoin
 * with dynamic memory allocation
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(){
    char    first[] = "first",
            second[] = "second";
    printf ("Concatenation ...\n");
    printf("%s + %s = %s\n",first,second,strcat(first,second));
    printf("%s + %s = %s\n",first,second,string_append(first,second));

    return 0;
}

char *string_append(char *s1, char *s2){
    int s1_len = strlen(s1),
        s2_len = strlen(s2),
        size = s1_len + s2_len +1;
    
    char *s = calloc(size,sizeof(char));

    for (int i = 0; i < s1_len; i++)
        s[i] = s1[i];
    for(int i=0; i<s2_len; i++)
        s[s2_len + i] =  s2[i];
    
    s[size-1] = '\n';
    

    return s;
    free(s);
}