/**
 * https://youtu.be/XMMmvv4wZtQ?si=Umz0s01PMJLPDuv4
 * Check if the string is a Palindrome
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char str[]);

int main(){
    char str1[] = "not a palindrome";
    char str2[] = "abccba"; // palindrome
    char str3[] = "abcdcba"; // palindrome
    (is_palindrome(str3)) ? printf("%s\n-is a palindrome\n",str3):printf("%s\n-is't a palindrome\n",str3);
    return 0;
}

bool is_palindrome(char str[]){
    int len = strlen(str);
    int middle = len/2;

    for (int i = 0; i < middle; i++){
        if(str[i] != str[len-1-i])
            return false;
    }
    
    return true;
}