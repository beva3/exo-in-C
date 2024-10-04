#include <stdio.h>
#define BUFFER_SIZE 5

int main(void){

    int buffer[BUFFER_SIZE]={0};
    int total = 0;


    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("Enter :");
        scanf("%d",&buffer[i]);
    }
    for (int  i = 0; i < BUFFER_SIZE ; i++)
    {
        printf("buffer[%d] = %d\n",i,buffer[i]);
        total += buffer[i];
    }
    printf("Average = %d\n",total/BUFFER_SIZE);

    return 0;
}