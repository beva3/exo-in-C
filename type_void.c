#include <stdio.h>
#include <stdlib.h>

void type_void();
void type_ptr_void();
void print_value(void *ptr, char type);

int main(){
    
    type_ptr_void();

    return 0;
}

void type_void(){
    int     a = 10;
    float   b = 5.5;
    char    c = 'x';
    void    *ptr; // void pointer
    
    ptr = &a; // Store adress of an integer
    printf("Integer value : %d\n",*(int *)ptr); // cast break to int

    ptr = &b; // Store the adress of a float
    printf("Integer value : %.2f\n",*(float *)ptr); // cast break to float

    ptr = &c; // Store the adress of a  char
    printf("Integer value : %c\n",*(char *)ptr); // cast break to char
}
void print_value(void *ptr, char type){
    if (type == 'i') printf("integer %d\n", *(int *)ptr);
    else if (type == 'f') printf("Float %.2f\n", *(float *)ptr);
    else if (type == 'c') printf("Char %c\n", *(char *)ptr);

}
void type_ptr_void(){
    printf("Type void *ptr ...\n");
    int     x = 42;
    float   y = 3.14;
    char    z = 'A';
    print_value(&x, 'i');
    print_value(&y, 'f');
    print_value(&z, 'c');
}