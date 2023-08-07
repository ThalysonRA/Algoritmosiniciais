#include <stdio.h>

int main(){
    float notas[3][2];

    //aluno 1
    notas[0][0] = 10;
    notas[0][1] = 8.5;

    //aluno 2
    notas[1][0] = 5.5;
    notas[1][1] = 2.7;

    //aluno 3
    notas[2][0] = 4;
    notas[2][1] = 10;

    printf("\n Aluno 1, 1° nota: %.1f",notas[0][0]);
    printf("\n Aluno 1, 2° nota: %.1f",notas[0][1]);

    printf("\n");
    printf("\n Aluno 2, 1° nota: %.1f",notas[1][0]);
    printf("\n Aluno 2, 2° nota: %.1f",notas[1][1]);

    printf("\n");
    printf("\n Aluno 3, 1° nota: %.1f",notas[2][0]);
    printf("\n Aluno 3, 2° nota: %.1f",notas[2][1]);

    return 0;
}