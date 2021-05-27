#include <stdio.h>
float average(int a, int b, int c);
int main(){
    int a,b,c;
    printf("enter the value of a : \n");
    scanf("%d", &a);
    printf("enter the value of b : \n");
    scanf("%d", &b);
    printf("enter the value of c : \n");
    scanf("%d", &c);
    average(2,3,3);
    return 0;
}
float average(int a, int b, int c){
    float result;
    result = (float)(a + b + c)/3;
    printf("%f", result);
}