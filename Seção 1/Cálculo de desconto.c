#include<stdio.h>

int main(){
    float valor_bruto = 0;
    float valor_liquido = 0;
    float desconto = 0;
    int qtd_pessoas = 0;
    float qtd_pessoas_liquido = 0;

    printf("\n Digite o valor total da conta: ");
    scanf("%f",&valor_bruto);
    printf("\n Digite a quantidade de pessoas: ");
    scanf("%d",&qtd_pessoas);
    printf("\n Digite o desconto (em porcentagem): ");
    scanf("%f",&desconto);

    valor_liquido = valor_bruto - (valor_bruto * desconto/100);
    qtd_pessoas_liquido = (valor_liquido/qtd_pessoas);

    printf("\n Valor da conta com desconto = R$ %.2f",valor_liquido);
    printf("\n Valor a ser pago por pessoa = R$ %.2f",qtd_pessoas_liquido);

    return 0;
}