#include <stdio.h>
#include <string.h>

// program to find the occurencces of most common character in a string

int find_occ(char string[], char c);

int main(){
    char input[2000];
    int occrs[200];
    int spaces=0;
    int times;
    int max=0;
    printf("Enter your string: ");
    scanf("%[^\n]%*c", input);
    for (int i=0; i<strlen(input); i++){
         if ((strcmp(&input[i], " "))==0){
             spaces++;
         }
         else{
             occrs[i] = find_occ(input, input[i]);
         }
    }

    times = (int)strlen(input)-spaces;

    for (int i=0; i<times; i++) {
        if (max < occrs[i]) {
            max = occrs[i];
        }
    }
    printf("The highest occurrence of a character in the string you provided is %d times.", max);
    return 0;
}

int find_occ(char string[], char c){
    int occ=0;
    for (int i=0; i<strlen(string); i++){
        if (string[i]==c){
            occ++;
        }
    }
    return occ;
}