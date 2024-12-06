#include <stdio.h>

int main(){
    printf("Scope of variable\n\n");
    char *name = "Raphael";
    printf("Name  = %s\n", name);
    // name[1] = 'q';  // no reade only
    printf("Name  = %s\n", name);
    return 0;
}