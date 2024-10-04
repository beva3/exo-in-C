#include <stdio.h>

/*-------------------------------------*/
void remove_char(char *s, char c);
void print_array(char *array);
/*-------------------------------------*/

int main(){
    char str[] = "raphael";
    remove_char(str,'a');
    return 0;
}


void print_array(char *array){
    int i=0;
    while (array[i] != '\0')
    {
        printf("%c%c",array[i],(array[i] == '\0') ? '\n' : ' ' );
        i++;
    }
    printf("[%d]\n",i-1);
    
}

void remove_char(char *s, char c){
    int i=0;
    while (s[i])
    {
        if (s[i] == c)
        {
            int position_tmp = i; 
            while (s[position_tmp] != '\0')
            {
                s[position_tmp] = s[position_tmp + 1];
                position_tmp++;
                print_array(s);
            }
            
        }
        
        
        printf("[%c]  => [%s] %c\n",s[i],(s[i] == c) ? "remove":"ok",(s[i + 1] != '\0') ? ' ' : '\n');
        
        i++;
    }
    
}