#include <stdio.h>

int main(){
    int x = 10, y = 5;
    float peso = 75.5;
    char genero = 'M';
    double pi = 3.1415926535897932384626433832795028841971;
    //crie outras variavéis

    /*printf("\n Espaço alocado para pi = %d",sizeof(pi));
    printf("\n Espaço alocado para x = %d",sizeof(x));
    printf("\n Espaço alocado para y = %d",sizeof(y));
    printf("\n Espaço alocado para peso = %d",sizeof(peso));
    printf("\n Espaço alocado para genero = %d",sizeof(genero));*/

    printf("\n O endereço da variáel x é: %d",&x);
    printf("\n O endereço da variáel y é: %d",&y);
    printf("\n O endereço da variáel peso é: %d",&peso);
    printf("\n O endereço da variáel genero é: %d",&genero);
    printf("\n O endereço da variáel pi é: %d",&pi);

    return 0;
}