#include <stdio.h>
#include <string.h>

struct automovel{
    char modelo[20];
    int ano;
    float valor;
};

int main(){
    struct automovel dadosAutomovel1;

    printf("\n Digite o modelo do automovel: ");
    fgets(dadosAutomovel1.modelo, sizeof(dadosAutomovel1.modelo), stdin);
    dadosAutomovel1.modelo[strcspn(dadosAutomovel1.modelo, "\n")] = '\0'; // Remove a quebra de linha lida pelo fgets

    printf("\n Digite o ano do automovel: ");
    scanf("%d", &dadosAutomovel1.ano);
    printf("\n Digite o valor do automovel: ");
    scanf("%f", &dadosAutomovel1.valor);

    printf("\n Dados atribuidos");
    printf("\n O modelo do carro é: %s", dadosAutomovel1.modelo);
    printf("\n O ano do carro é: %d", dadosAutomovel1.ano);
    printf("\n O valor do carro é: R$ %.2f", dadosAutomovel1.valor);

    return 0;
}
