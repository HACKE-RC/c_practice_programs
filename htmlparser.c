#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parser(char* string){
    int printing;
    int index=0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='<'){
            printing = 0;
            index++;
        }
        else if (string[i]=='>')
        {
            printing = 1;
            index++;
        }
        else{
            if (printing == 1){
                printf("%c", string[index]);
                index++;
            }
            else{
                if (string[index]=='h' && string[index+1]=='1' && string[index+2]=='>'){
                    if (string[index-1]=='/'){
                        printf("\033[0m");
                    }
                    else{
                        printf("\033[1m");
                    }
                }
                else if (string[index]=='b' && string[index+1]=='r' && string[index+2]=='>'){
                    printf("\n");
                }
                else if (string[index]=='h' && string[index+1]=='r' && string[index+2]=='>'){
                    puts("---------------------------------------------");
                }
                index++;
            }
        }
    }
}

int main(int argc, char* argv[]){
    char fname[100];
    char data[500];

    puts("HTML Filename to read: ");
    scanf("%s", &fname);

    FILE* fp = fopen(fname, "r");
    if (fp==NULL){
        puts("Can't open the file");
        exit(0);
    }
    fread(data, 500, 1, fp);
    parser(data);

    fclose(fp);
    return 0;
}