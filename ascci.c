#include <stdio.h>

void ascii(){
    // American Standard Code for Information Interchange
    int i=1;
    for (char ch = '!'; ch <= '~'; ch++){
        printf("%3d : %c %x %o %4d\n",i,ch,ch,ch,ch);
        i++;
    }

}

int main(){
    ascii();
    return 0;
}