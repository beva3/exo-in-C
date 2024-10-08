#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printData(FILE *data);
int line_file(FILE *file);
void Push();
void delet();

int main(void)
{
    FILE *f = fopen("data.txt","r");
    // printData(f);
    printf("n line = %d\n",line_file(f));

    fclose(f);
    return 0;
}

void printData(FILE *data){
    char line[245];
    printf("echo data \n");

    while (fgets(line,sizeof(line),data))
    {
        printf("%s",line);
    }
}

int line_file(FILE *file){
    int n_line = 0;
    char str_line[256];

    // manisa ligne
    while (fgets(str_line,sizeof(str_line),file))
    {
        n_line++;
    }

    return n_line;
}