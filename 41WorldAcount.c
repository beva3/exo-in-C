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
int world_acount(char *s);

int main(){
    printf("count : %d\n",world_acount("hello world how are you"));
    return 0;
}

int world_acount(char *s){
    int count = 1;
    while ((*s))
    {
        if ((*s) == ' ')
        {
            count ++;
        }
        *s++;
        
        
    }
    
    return count;
}