#include<stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c = 5;
    float resultado = 0;

    resultado = (a + b *(c-b)/a);

    printf("\n O resultado é %.0f",resultado);

    return 0;
}