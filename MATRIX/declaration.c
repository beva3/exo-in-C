#include <stdio.h>

void print_matrix_2D(int m[3][3],int l, int c){
    for(int i=0; i<l; i++)
        for(int j=0; j<c; j++)
            printf("%d%c",m[i][j],(j==c-1)?'\n':' ');
}

int main(){
    int m[3][3] = {
        {1,1,1},
        {2,2,2},
        {3,3,3}
    };

    print_matrix_2D(m,3,3);
    
    return 0;
}