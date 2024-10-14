#include <stdio.h>

int s_n2(int n);
int form_S_n2(int n);
void print_s(int n);

int main(){
    print_s(9);
    return 0;
}
int s_n2(int n){
    int s = 0;
    for(int i = 1; i<=n; i++){
        s += i*i;
    }
    return s;
}

void print_s(int n){
    for(int i = 1; i<=n; i++)
        printf("%d%c",i,(i==n)?'\n':' ');

    printf("s = %d : with loop for\n",s_n2(n));
    printf("s = %d : with math formul\n",form_S_n2(n));
}

int form_S_n2(int n){
    return (n*(2*n + 1)*(n + 1))/6;
}