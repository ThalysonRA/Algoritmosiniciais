#include <stdio.h>
 
int main () {
    short int idade = 18;
    float salario = 7500;
    double qtd_atomos = 123456789123;
    char genero = 'F';
    float altura = 1.63;

    printf("\n idade: %d",idade);
    printf("\n salario: R$ %.2f",salario);
    printf("\n qtd_atomos: %.0f", qtd_atomos);
    printf("\n gênero: %c", genero);
    printf("\n altura: %.2f",altura);

    return 0;
}