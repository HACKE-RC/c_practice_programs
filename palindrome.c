#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int isPalindrome(int a){
    char str[10];
    itoa(a, str, 10);
    if ((atoi(strrev(str))==a)){
        return 1;
    }
    return 0;
}

int main(int argc, char* argv[]){
    int input;
    puts("Enter a number: ");
    scanf("%d", &input);
    if (isPalindrome(input)){
        printf("The number you entered is Palindrome!");
    }
    else{
        printf("The number you entered is not Palindrome!");
    }

    return 0;
}