#include <stdio.h>

int main(){
    int ano_2014[3] = {0};
    int ano_2015[3] = {0};
    int ano_2016[3] = {0};
    int media_2014 = 0;
    int media_2015 = 0;
    int media_2016 = 0;

    // Ano de 2014
    printf("Qual é a quantidade de carros de 2014: ");
    scanf("%d",&ano_2014[0]);
    printf("A quantidade de carros de 2014 é %d.",ano_2014[0]);

    printf("\n\nQual é a quantidade de Moto de 2014: ");
    scanf("%d",&ano_2014[1]);
    printf("A quantidade de Motos de 2014 é %d.",ano_2014[1]);

    printf("\n\nQual é a quantidade de Caminhões de 2014: ");
    scanf("%d",&ano_2014[2]);
    printf("A quantidade de Caminhões de 2014 é %d.\n\n",ano_2014[2]);

    media_2014 = (ano_2014[0] + ano_2014[1] + ano_2014[2])/3; 

    printf("\n A média de veículos em 2014 é: %d",media_2014);

    sleep(3);
    system("cls");


    // Ano de 2015
    printf("Qual é a quantidade de carros de 2015: ");
    scanf("%d",&ano_2015[0]);
    printf("A quantidade de carros de 2015 é %d.",ano_2015[0]);

    printf("\n\nQual é a quantidade de Moto de 2015: ");
    scanf("%d",&ano_2015[1]);
    printf("A quantidade de Motos de 2015 é %d.",ano_2015[1]);

    printf("\n\nQual é a quantidade de Caminhões de 2015: ");
    scanf("%d",&ano_2015[2]);
    printf("A quantidade de Caminhões de 2015 é %d.\n\n",ano_2015[2]);

    media_2015 = (ano_2015[0] + ano_2015[1] + ano_2015[2])/3; 

    printf("\n A média de veículos em 2015 é: %d",media_2015);

    sleep(3);
    system("cls");


    // Ano de 2016
    printf("Qual é a quantidade de carros de 2016: ");
    scanf("%d",&ano_2016[0]);
    printf("A quantidade de carros de 2016 é %d.",ano_2016[0]);

    printf("\n\nQual é a quantidade de Moto de 2016: ");
    scanf("%d",&ano_2016[1]);
    printf("A quantidade de Motos de 2016 é %d.",ano_2016[1]);

    printf("\n\nQual é a quantidade de Caminhões de 2016: ");
    scanf("%d",&ano_2016[2]);
    printf("A quantidade de Caminhões de 2016 é %d.\n\n",ano_2016[2]);

    media_2016 = (ano_2016[0] + ano_2016[1] + ano_2016[2])/3; 

    printf("\n A média de veículos em 2016 é: %d",media_2016);

    sleep(3);
    system("cls");

    printf("2014 obteve a maior média? %d",((media_2014>media_2015) && (media_2014>media_2016)));
    printf("\n2015 obteve a maior média? %d",((media_2015>media_2014) && (media_2015>media_2016)));
    printf("\n2016 obteve a maior média? %d",((media_2016>media_2014) && (media_2016>media_2015)));

    return 0;
}