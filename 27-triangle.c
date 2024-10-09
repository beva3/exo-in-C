#include <stdio.h>
#include <string.h>

void print_o(int number_o){
    for(int i=0; i<number_o; i++)
        printf("o%c",(i==number_o-1) ? '\n':' ');
}

void make_triangle(int number_line,const char* mode){
    int start = 0;
    printf("triangle %s\n",mode);

    if (strcmp(mode,"sup") == 0)
        for (int  i = number_line; i >= 0; i--)
            print_o(i);

    else if(strcmp(mode,"sub") == 0)
        for (int  i = 0; i <= number_line; i++)
            print_o(i);

    else
        for (int  i = 0; i <= number_line; i++)
            printf("try to use the const \"sub\" or \"sup\"\n");
}

void make_triangle_sup(int number_line){
    for (int  i = number_line; i >= 0; i--)
    {
        print_o(i);
    } 
    
}

int main(){
    make_triangle(9,"sub");
    return 0;
}