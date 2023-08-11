#include <stdio.h>

int main(){
    float salario_bruto, salario_liquido, desconto;

    printf("Qual é o seu salário? ");
    scanf("%f",&salario_bruto);

    if(salario_bruto <= 1693.72){
        desconto = salario_bruto * 0.08;
        salario_liquido = salario_bruto - desconto;
        printf("O seu salário com desconto é: %2f",salario_liquido);
    }
    return 0;
}