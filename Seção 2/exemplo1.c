#include <stdio.h>

int main(){
    float salario_bruto, salario_liquido, inss, IR,desconto;

    printf("Qual é o seu salário?");
    scanf("%f",&salario_bruto);

    if(salario_bruto <= 1693.72){
        inss = salario_bruto * 0.08;
    }
    else
        if(salario_bruto >= 1693.73 && salario_bruto <= 2822.90){
            inss = salario_bruto * 0.09;
        }
        else
            if(salario_bruto >= 2822.91 && salario_bruto <= 5646.80){
                inss = salario_bruto * 0.11;
            }
            else
                if(salario_bruto >= 5646.80){
                    inss = 621.04;
                }
    

    if(salario_bruto <= 1903.98){
        IR = 0;
    }
    else
        if(salario_bruto >= 1903.99 && salario_bruto <= 2826.65){
            IR = salario_bruto * 0.075;
        }
        else
            if(salario_bruto >= 2826.66 && salario_bruto <= 3751.05){
                IR = salario_bruto * 0.15;
            }
            else
                if(salario_bruto >= 3751.06 && salario_bruto <= 4664.68){
                    IR = salario_bruto * 0.225; 
                }
                else
                    if(salario_bruto >= 4664.68){
                        IR = salario_bruto * 0.275;
                    }

    
    desconto = IR + inss;
    salario_liquido = salario_bruto - desconto;
    printf("O salário com desconto do INSS e IR: R$ %2.f",salario_liquido);

    return 0;
}