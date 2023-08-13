#include <stdio.h>

int main (){

    int contador = 0;

    printf("Digite um valor: ");
    scanf("%d",&contador);

    for(contador;contador>=1;contador --){
        printf("%d ",contador);
    }
    return 0;
}