#include <stdio.h>
#include <windows.h>

int main(){
    int s, h, m = 0;
    int delay = 1000;

    while(1){
        s++;
        if (s>59){
            m++;
            s=0;
             }
        if (m>59){
            h++;
        }
        if (h>12){
            h=1;
        }

    printf("Time: %02d:%02d:%02d", h, m, s);
    Sleep(delay);
    system("cls");
    }

    return 0;
}