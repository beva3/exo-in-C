#include <stdio.h>
#include <string.h>

int convert(char *str);

int main(void){

    printf("[%d]\n",convert("1011"));

    return 0;
}

int convert(char *str){
    int len = strlen(str);
    int result = 0;
    int decVal = 1;
    for (int i = len-1; i >= 0; i--)
    {
        if (str[i] == '1') result += decVal;
        decVal = 2*decVal;
        // printf("%d\n",total);
        
    }
    return result;
 
}