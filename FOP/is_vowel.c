#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_vowel(char chr);
void test();

int main(){
    // printf("%d \n",is_vowel('p'));
    test();
    return 0;
}

bool is_vowel(char chr){
    // printf("Is vowel ... ?\n");
    char vowel[] = "euioaEUIOA";
    int i = 0;
    bool _bool = false;

    while(vowel[i]){
        if(chr == vowel[i]){
            _bool = true;
            break;
        }else{_bool = false;}
        i++;
    }
    return _bool;
}

void test(){
    for (char i = 'a'; i <= 'z'; i++)
        printf("[%c] | %d \n",i,is_vowel(i)); 
}